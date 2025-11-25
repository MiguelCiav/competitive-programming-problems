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
    string s;
    cin >> s;
    ll count[2] = {0,0};
    ll max_count[2] = {0,0};
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '0'){
            count[1] = 0;
            count[0]++;
        } else {
            count[0] = 0;
            count[1]++;
        }
        max_count[0] = max(max_count[0], count[0]);
        max_count[1] = max(max_count[1], count[1]);
    }
    cout << (max_count[0] >= 7 || max_count[1] >= 7 ? "YES" : "NO") << endl;
    return 0;
}