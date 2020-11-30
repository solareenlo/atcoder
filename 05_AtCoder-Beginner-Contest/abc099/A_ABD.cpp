#include <iostream>

using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    if (N < 1000) {
        cout << "ABC" << '\n';
    } else {
        cout << "ABD" << '\n';
    }

    return 0;
}
