#include <iostream>

int main() {
    int n, a, b; std::cin >> n >> a >> b;
    int res = 0;
    while (n--) {
        int t; std::cin >> t;
        if (t<a || t>=b)
            res++;
    }
    std::cout << res << std::endl;
    return 0;
}
