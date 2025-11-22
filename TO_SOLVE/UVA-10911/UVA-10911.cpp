#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using ll = long long;
using ii = std::pair<int,int>;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using vii = std::vector<ii>;
using mati = std::vector<std::vector<int>>;
using matll = std::vector<std::vector<ll>>;

const float INF = 1e9;

float distance(ii a, ii b){
    return std::sqrt(std::pow(a.first - b.first, 2) + std::pow(a.second - b.second, 2));
}

short 

short next_index(short combination, short number_of_students) {
    short index = number_of_students;
    while(combination != 0) {
        combination = combination >> 1;
        index--;
    }
    return index;
}

float dp(short combination, vii &students, int index, vi &memo) {
    if(combination == 0) return 0;
    if(memo[combination] != -1) return memo[combination];
    float min = INF;
    
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int number_of_students, _case = 1;
    std::cin >> number_of_students;
    short combination = 1;
    while(number_of_students != 0){
        vii students;
        vi memo = vi(256, -1);
        std::string ignore;
        int point_x, point_y;

        for(int i = 0; i < number_of_students; i++) {
            std::cin >> ignore >> point_x >> point_y;
            students.push_back({point_x, point_y});
        }
        std::cout << "Case " << _case << ": " << dp(combination,students,0,memo) << "\n";

        _case++;
        std::cin >> number_of_students;
        combination = std::pow(2, number_of_students) - 1;
    }
    return 0;
}