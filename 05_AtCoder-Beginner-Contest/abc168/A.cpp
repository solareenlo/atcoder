#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int op = n % 10;
    if (op == 2 || op == 4 || op == 5 || op == 7 || op == 9)
        cout << "hon" << '\n';
    if (op == 0 || op == 1 || op == 6 || op == 8)
        cout << "pon" << '\n';
    if (op == 3)
        cout << "bon" << '\n';
    return 0;
}
