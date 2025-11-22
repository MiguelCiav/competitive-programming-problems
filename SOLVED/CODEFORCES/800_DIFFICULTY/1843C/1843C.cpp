#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using ll = long long;
using ii = std::pair<int,int>;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using vii = std::vector<ii>;
using mati = std::vector<std::vector<int>>;
using matll = std::vector<std::vector<ll>>;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    ll test_cases;
    std::cin >> test_cases;
    while (test_cases--) {
        ll n, sum = 0;
        std::cin >> n;
        while(n >= 1) {
            sum += n;
            n = n >> 1;
        }
        std::cout << sum << '\n';
    }
    return 0;
}