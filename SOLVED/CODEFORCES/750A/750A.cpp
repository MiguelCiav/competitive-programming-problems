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

const vll problem_time = {0, 5, 15, 30, 50, 75, 105, 140, 180, 225, 275};

int binary_search(ll available_time, ll max_problems) {
    if(available_time < 5) return 0;
    int low = 1, mid = 1;
    int high = max_problems;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (problem_time[mid] == available_time)
            return mid;
        if (problem_time[mid] < available_time)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return mid;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll max_problems, travel_time;
    cin >> max_problems >> travel_time; 
    ll available_time = 240 - travel_time;
    
    ll index = binary_search(available_time, max_problems);
    if(problem_time[index] > available_time)
        index--;
    cout << index << '\n';

    return 0;
}