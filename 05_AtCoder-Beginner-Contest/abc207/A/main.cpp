#include <iostream>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a[3];
    REP(i, 3)
        std::cin >> a[i];
    std::sort(a, a+3);
    std::cout << a[1] + a[2] << std::endl;
    return 0;
}
