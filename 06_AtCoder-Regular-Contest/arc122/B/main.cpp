// Copyright

#include <algorithm>
#include <iostream>
#include <iomanip>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    int a[n];
    REP(i, n)
        std::cin >> a[i];
    std::sort(a, a+n);
    int num = a[n/2];
    int64_t res = 0;
    REP(i, n)
        res += a[i] - std::min(a[i], num);
    std::cout << std::setprecision(10) << 1.0*res/n + 1.0*num/2 << std::endl;
    return 0;
}
