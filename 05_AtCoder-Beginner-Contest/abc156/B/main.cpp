#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int count = 0;
    while (n) {
        n /= k;
        count++;
    }

    cout << count << '\n';
    return 0;
}
