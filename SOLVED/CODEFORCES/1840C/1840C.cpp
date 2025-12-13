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
    while(t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        ll p1 = 1, p2 = 1;
        ll sum = 0;
        for(ll i = 1; i <= n; i++) {
            ll temperature;
            cin >> temperature;
            if(temperature <= q) p2++;
            if(temperature > q || (temperature <= q && i == n)) {
                ll length = p2-p1;
                if(length >= k) sum += ((length-k+1)*(length+1)) - (((length*(length+1))/2)-(((k-1)*k)/2));
                p1 = p2;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}