#include <bits/stdc++.h>

#define ll long long
#define vll std::vector<ll>
#define matll std::vector<std::vector<ll>>


/* We have 511 base compositions. The ways to add 2 zeros (no leading) 
is (k+1, 2), which grows quadratically with the length k. 
The average length k is around 6. So, a quick upper bound is: 511 
* (ways for k=6) = 511 * binom(7, 2) = 511 * 21 that is 10,000 approx.
for 1,1,1,1, ... ,1 (ten times), there are 10 digits, with 2 zeros, that's
12 digits, but, testing, it still works with 10 for k = 10 000.
*/
matll dp = matll(10, vll(11, -1));
ll count(ll digits_left, ll sum_needed) {
    if (sum_needed < 0) return 0;
    if (digits_left == 0) return sum_needed == 0 ? 1 : 0;
    if (dp[digits_left][sum_needed] != -1) 
        return dp[digits_left][sum_needed];
    ll total_ways = 0;
    for (ll digit = 0; digit <= 9; digit++) {
        total_ways += count(digits_left - 1, sum_needed - digit);
    }
    return dp[digits_left][sum_needed] = total_ways;
}

ll get_total_ways(ll length) {
    ll total_ways = 0;
    for (ll digit = 1; digit <= 9; digit++) {
        total_ways += count(length - 1, 10 - digit);
    }
    return total_ways;
}

ll find_length(ll &k) {
    ll length = 1;
    while (true) {
        ll total_ways = get_total_ways(length);
        if (k <= total_ways) {
            return length;
        }
        k -= total_ways;
        length++;
    }
}

std::string find_kth(ll digits_left, ll k) {
    std::string ans = "";
    ll sum = 10;
    for (ll i = 0; i < digits_left; i++) {
        for(ll digit = (i == 0 ? 1 : 0); digit <= 9; digit++) {
            ll ways = count(digits_left - i - 1, sum - digit);
            if (k <= ways) {
                ans.append(std::to_string(digit));
                sum -= digit;
                break;
            }
            if(k > ways) {
                k -= ways;
            }
        }
    }
    return ans;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll k;
    std::cin >> k;
    ll length = find_length(k);
    printf("%s\n", find_kth(length,k).c_str());
    return 0;
}