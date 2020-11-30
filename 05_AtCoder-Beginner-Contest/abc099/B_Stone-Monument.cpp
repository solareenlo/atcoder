#include <iostream>

using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int diff = b - a;

    int sum_a = 0;
    for (int i = 0; i < diff; i++) {
        sum_a += i;
    }

    cout << sum_a - a << '\n';
    return 0;
}
