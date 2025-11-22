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

using namespace std;

vll fact = {
    1,1,2,6,24,120,720,5040,40320,362880,3628800
};

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    ll test_cases;
    std::cin >> test_cases;
    while (test_cases--) {
        ll n, available = 10;
        std::cin >> n;
        available -= n;
        for (ll i = 0; i < n; i++) {
            ll x;
            std::cin >> x;
        }
        cout << (fact[available]/(2*fact[available-2]))*6 << '\n';
    }
    return 0;
}