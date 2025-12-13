#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using mati = vector<vector<int>>;
using matll = vector<vector<ll>>;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    const string pattern = "FBFFBFFBFBFFBFFBFBFFBF";
    ll t;
    cin >> t;
    while (t--) {
        short k;
        string subpattern;
        cin >> k;
        cin >> subpattern;
        for(int i = 0; i <= 10; i++) {
            if(subpattern == pattern.substr(i, k)) {
                cout << "YES\n";
                break;
            }
            if(i == 10) cout << "NO\n";
        }
    }
    
    return 0;
}