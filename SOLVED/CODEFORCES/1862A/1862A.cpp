#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using mati = vector<vector<int>>;
using matll = vector<vector<ll>>;

bool will_like(vector<vector<bool>> carpet, short actual, size_t index) {
    if(actual == 4) {
        return true;
    }
    for(size_t i = index; i < carpet.size(); i++) {
        if(carpet[i][actual]) {
            return will_like(carpet, actual + 1, i + 1);
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    short t;
    cin >> t;
    while (t--) {
        short n,m;
        cin >> n >> m;
        vector<vector<bool>> carpet(m, vector<bool>(4, false));
        for(short i = 0; i < n; i++) {
            for(short j = 0; j < m; j++) {
                char c;
                cin >> c;
                switch(c) {
                    case 'v':
                        carpet[j][0] = true;
                        break;
                    case 'i':
                        carpet[j][1] = true;
                        break;
                    case 'k':
                        carpet[j][2] = true;
                        break;
                    case 'a':
                        carpet[j][3] = true;
                        break;
                }
            }
        }
        cout << (will_like(carpet, 0, 0) ? "yEs" : "nO") << endl;
    }
    return 0;
}