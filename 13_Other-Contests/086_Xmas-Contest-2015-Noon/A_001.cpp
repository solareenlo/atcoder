#include <iostream>

int main() {
    int64_t n, x, t, a, b, c;
    std::cin >> n >> x >> t >> a >> b >> c;
    int64_t g = 1, h = 0;
    while (t) {
        if (t&1) {
            g = g*a%c;
            h = (a*h+b)%c;
        }
        b = (a*b+b)%c;
        a = a*a%c;
        t >>= 1;
    }
    int64_t res = 0;
    for (int i = 0; i < n; i++) {
        res += x;
        x = (g*x+h)%c;
    }
    std::cout << res << '\n';
    return (0);
}
