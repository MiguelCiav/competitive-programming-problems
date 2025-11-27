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
    
    bool allUpper = true;
    for(char c : s) {
        if(islower(c)) {
            allUpper = false;
            break;
        }
    }
    
    bool allButFirstUpper = true;
    for(size_t i = 1; i < s.length(); i++) {
        if(islower(s[i])) {
            allButFirstUpper = false;
            break;
        }
    }
    
    if(allUpper || allButFirstUpper) {
        for(size_t i = 0; i < s.length(); i++) {
            if(islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    cout << s << "\n";
    
    return 0;
}