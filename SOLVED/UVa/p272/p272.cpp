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
    string text = "", word = "";
    while(getline(cin, word)) {
        text += word + "\n";
    }
    bool opening = true;
    string result = "";
    for(int i = 0; i < text.size(); i++) {
        if(text[i] == '"' && opening) {
            result += "``";
            opening = false;
        } else if(text[i] == '"' && !opening) {
            result += "''";
            opening = true;
        } else {
            result += text[i];
        }
    }
    cout << result;
    return 0;
}