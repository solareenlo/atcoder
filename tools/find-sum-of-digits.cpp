#include <iostream>
using namespace std;

inline int findSumOfDights(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

inline int sumOrder(int n) {
    if (n == 0) {
        return 0;
    }
    return sumOrder(n / 10) + (n % 10);
}
