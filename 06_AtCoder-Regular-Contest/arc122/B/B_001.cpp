// Copyright

#include <iostream>
#include <iomanip>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    double a[n];
    REP(i, n)
        std::cin >> a[i];
    std::sort(a, a+n);
    double x = a[n/2] / 2;
    double res = 0;
    REP(i, n)
        res += (x+a[i]-std::min(a[i], x*2))/n;
    std::cout << std::setprecision(10) << res << std::endl;
    return 0;
}
