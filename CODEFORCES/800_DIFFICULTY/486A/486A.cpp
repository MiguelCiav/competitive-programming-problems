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
    ll n;
    std::cin >> n;
    std::cout << ((n%2==0) ? n/2 : -((n+1)/2)) << "\n";
    return 0;
}