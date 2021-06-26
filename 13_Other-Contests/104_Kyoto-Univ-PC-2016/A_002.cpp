#include <iostream>
int n, a, b, t, res;
int main() {
    std::cin >> n >> a >> b;
    while (std::cin >> t)
        res += t<a || b<=t;
    std::cout << res << std::endl;
    return 0;
}
