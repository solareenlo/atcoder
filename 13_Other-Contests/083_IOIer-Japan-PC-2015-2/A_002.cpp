#include <bits/stdc++.h>

int main() {
    int n; std::cin >> n;
    std::cout << (n==45?1:std::lcm(90,n)/n) << '\n';
    return 0;
}
