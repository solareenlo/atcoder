#include <iostream>
using namespace std;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

template<class T> inline T lcm(T a, T b) {
    return a * b / gcd(a, b);
}
