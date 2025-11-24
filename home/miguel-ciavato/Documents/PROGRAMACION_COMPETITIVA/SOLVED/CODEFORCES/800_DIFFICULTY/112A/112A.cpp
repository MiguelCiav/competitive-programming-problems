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
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a == b) cout << "0\n";
    else if (a < b) cout << "-1\n";
    else cout << "1\n";
    return 0;
}