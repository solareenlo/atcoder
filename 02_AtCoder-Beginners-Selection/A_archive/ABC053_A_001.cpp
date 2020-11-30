#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    if (x < 1200)
        cout << "ABC" << '\n';
    else
        cout << "ARC" << '\n';
    return 0;
}
