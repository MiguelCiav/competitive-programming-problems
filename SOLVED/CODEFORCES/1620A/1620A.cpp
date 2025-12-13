#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using mati = vector<vector<int>>;
using matll = vector<vector<ll>>;

bool consistent(string word) {
    int n_count = 0;
    for (char c : word) {
        if (c == 'N') n_count++;
    }
    return n_count != 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test_cases;
    cin >> test_cases;
    while (test_cases--) {
        string s;
        cin >> s;
        cout << (consistent(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}