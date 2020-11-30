#include <iostream>
using namespace std;

int main() {
    int k, x;
    cin >> k >> x;

    if (500 * k >= x)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}
