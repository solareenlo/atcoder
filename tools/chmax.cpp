#include <iostream>
using namespace std;

template<class T>
inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}
