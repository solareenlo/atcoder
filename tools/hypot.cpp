#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    // a, b が直角に交わる直角三角形の斜辺の長さが求まる
    cout << hypot(a, b) << '\n';
    return 0;
}
