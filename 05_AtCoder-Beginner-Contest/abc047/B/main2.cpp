#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

int main() {
    int w, h, n;
    cin >> w >> h >> n;

    int minX = 0, maxX = w, minY = 0, maxY = h;
    REP(i, n) {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1) chmax(minX, x);
        if (a == 2) chmin(maxX, x);
        if (a == 3) chmax(minY, y);
        if (a == 4) chmin(maxY, y);
    }

    if (minX > maxX || minY > maxY) cout << 0 << '\n';
    else cout << (maxX - minX) * (maxY - minY) << '\n';
    return 0;
}
