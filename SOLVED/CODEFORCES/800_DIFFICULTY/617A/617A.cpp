#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using ll = long long;
using ull = unsigned long long;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using vull = std::vector<ull>;
using mati = std::vector<std::vector<int>>;
using matll = std::vector<std::vector<ll>>;
using matull = std::vector<std::vector<ull>>;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    ll x, total = 0;
    std::cin >> x;
    for(int i = 5; i >= 1; i--) {
        if (x/i >= 1){
            total += (x / i);
            x %= i;
        }
    } 
    std::cout << total << "\n";
    return 0;
}