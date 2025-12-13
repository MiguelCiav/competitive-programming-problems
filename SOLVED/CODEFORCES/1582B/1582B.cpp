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

ll my_pow(ll a, ll b) {
    ll res = 1;
    for(ll i = 0; i < b; i++) {
        res *= a;
    }
    return res;
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        unordered_map<ll, ll> mp;
        for(ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mp[x]++;
        }
        cout << mp[1] * my_pow(2, mp[0]) << '\n';
    }
    return 0;
}