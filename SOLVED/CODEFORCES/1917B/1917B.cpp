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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    ll ans = 0;
    vector<bool> seen(26, false);
    
    for(int i = 0; i < n; ++i) {
        if(!seen[s[i] - 'a']) {
            seen[s[i] - 'a'] = true;
            ans += (ll)(n - i);
        }
    }
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    short t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}