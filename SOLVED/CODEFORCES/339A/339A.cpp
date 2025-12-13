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
    vi v;
    string s;
    cin >> s;
    for(auto c : s) {
        if(c == '+') continue;
        v.push_back(c - '0');
    }
    sort(v.begin(), v.end());
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i != v.size() - 1) cout << "+";
    }
    cout << endl;
    return 0;
}