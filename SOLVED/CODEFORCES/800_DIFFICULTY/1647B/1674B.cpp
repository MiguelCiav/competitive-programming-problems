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
    short t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (25*(s[0]-97) + 1) + (s[1]-97) - (s[1] > s[0] ? 1 : 0) << '\n'; 
    }
    return 0;
}