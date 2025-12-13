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
    short test_cases;
    cin >> test_cases;
    while(test_cases--) {
        short pal_length;
        cin >> pal_length;
        vll vowels_count = vll(5, pal_length/5);
        for(short i = 0; i < pal_length%5; i++) {  
            vowels_count[i]++;
        }
        for(short i = 0; i < 5; i++) {
            for(short j = 0; j < vowels_count[i]; j++) {
                cout << "aeiou"[i];
            }   
        }
        cout << "\n";
    }
    return 0;
}