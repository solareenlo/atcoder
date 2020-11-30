#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n << '\n';
    else
        cout << 2 * n << '\n';
    return 0;
}
