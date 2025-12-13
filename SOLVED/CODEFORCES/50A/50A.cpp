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
    ll M, N;
    std::cin >> M >> N;
    if(N%2 == 0) {
        std::cout << (N/2)*M << std::endl;
        return 0;
    }
    if(M%2 == 0) {
        std::cout << (M/2)*N << std::endl;
        return 0;
    }
    std::cout << (N*((M-1)/2)) + ((N-1)/2) << std::endl;
    return 0;
}