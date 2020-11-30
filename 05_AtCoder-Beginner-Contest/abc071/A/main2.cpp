#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    if (abs(x - a) > abs(x - b)) cout << 'B' << '\n';
    else cout << 'A' << '\n';
    return 0;
}
