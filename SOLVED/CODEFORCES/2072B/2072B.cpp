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
    ll t;
    cin >> t;
    while (t--) {
        unordered_map<char,int> occurrences;
        ll length;
        cin >> length;
        for(ll i = 0; i < length; i++) {
            char c;
            cin >> c;
            occurrences[c]++;
        }
        ll half = (occurrences['-']%2 == 0) ? occurrences['-'] / 2 : (occurrences['-']-1) / 2;
        cout << (occurrences['-']%2 == 0 ? (half*half*occurrences['_']) : (half*(half+1)*occurrences['_'])) << "\n";
    }
    return 0;
}