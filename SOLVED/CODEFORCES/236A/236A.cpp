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
    unordered_map<char,bool> exists;
    string username;
    ull total = 0;
    cin >> username;
    for (auto c : username) {
        if(!exists[c]) {
            exists[c] = true;
            total++;
        }
    }
    cout << (total%2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
    return 0;
}