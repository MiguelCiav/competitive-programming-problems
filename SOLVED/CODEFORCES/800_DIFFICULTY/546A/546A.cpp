#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using ll = long long;
using ii = std::pair<int,int>;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using vii = std::vector<ii>;
using mati = std::vector<std::vector<int>>;
using matll = std::vector<std::vector<ll>>;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    ll k,n,w;
    std::cin >> k >> n >> w;
    ll C = k*((w*(w+1))/2);
    std::cout << ((C - n > 0) ? C - n : 0) << "\n";
    return 0;
}