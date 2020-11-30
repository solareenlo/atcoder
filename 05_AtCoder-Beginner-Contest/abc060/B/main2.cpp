#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;
    for (int i = 1; i < b; i++) {
        if (i * a % b == c % b) {
            ans = true;
            break ;
        }
    }

    if (ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
