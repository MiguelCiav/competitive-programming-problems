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
    int t;
    cin >> t;
    while(t--) {
        ull n,i=1,total=0;
        cin >> n;
        while(n%i==0) {
            total++;
            i++;
        }
        cout << total << endl;
    }
    return 0;
}