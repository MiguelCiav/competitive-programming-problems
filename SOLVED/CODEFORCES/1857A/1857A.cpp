#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using mati = vector<vector<int>>;
using matll = vector<vector<ll>>;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test_cases;
    cin >> test_cases;
    while (test_cases--) {
        ll n, odds = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x % 2 != 0) odds++;
        }
        if (odds % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}