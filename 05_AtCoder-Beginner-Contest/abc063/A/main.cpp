#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if (a + b >= 10) cout << "error" << '\n';
    else cout << a + b << '\n';
    return 0;
}
