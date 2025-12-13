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

    ll n, goals = 1;
    string team_1, team_2 = "0";
    cin >> n;
    cin >> team_1;
    n--;
    while(n--) {
        string goal;
        cin >> goal;
        if(goal == team_1) {
            goals++;
        } else {
            if(team_2 == "0") team_2 = goal;
            goals--;
        };
    }
    cout << (goals > 0 ? team_1 : team_2) << endl;


    return 0;
}