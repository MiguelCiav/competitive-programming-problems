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

bool is_a_cycle(vll planes, ll first, ll actual, ll step) {
    if(step == 0)
        return planes[actual] == planes[first];
    return is_a_cycle(planes,first,planes[actual],--step);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    vll planes;
    planes.push_back(0);
    cin >> n;
    for(ll i = 0; i < n; i++) {
        ll plane;
        cin >> plane;
        planes.push_back(plane);
    }
    for(ll i = 1; i <= n - 2; i++) {
        if(is_a_cycle(planes,i,i,3)) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}