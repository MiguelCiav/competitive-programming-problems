#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using mati = vector<vector<int>>;
using matll = vector<vector<ll>>;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    ll total = 0;
    int n = str.size();
    
    for(int i = 0; i < n; i++) {
        if(str[i] == 'A') {
            ll q_before = 0;
            ll q_after = 0;
            for(int j = 0; j < i; j++) {
                if(str[j] == 'Q') q_before++;
            }
            for(int j = i + 1; j < n; j++) {
                if(str[j] == 'Q') q_after++;
            }
            total += q_before * q_after;
        }
    }
    
    cout << total << '\n';
    return 0;
}