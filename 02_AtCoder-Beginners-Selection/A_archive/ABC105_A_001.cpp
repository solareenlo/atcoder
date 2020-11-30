#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    if (n % k)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
    return 0;
}
