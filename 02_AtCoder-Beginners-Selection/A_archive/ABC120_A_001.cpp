#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c <= b / a) cout << c << '\n';
    else cout << b / a << '\n';

    return 0;
}
