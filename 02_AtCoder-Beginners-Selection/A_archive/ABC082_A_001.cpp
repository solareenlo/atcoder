#include <iostream>
using namespace std;

int main(void) {
    int a, b; cin >> a >> b;
    double mean = (a + b) / 2.0;
    int m = (a + b) / 2;
    if (mean - (double)m > 0) cout << m + 1 << '\n';
    else cout << m << '\n';
    return 0;
}
