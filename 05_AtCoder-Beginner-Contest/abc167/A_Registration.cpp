#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S, T;
    cin >> S >> T;

    string tmp;
    tmp = T.substr(0, T.size() - 1);

    if (S == tmp) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}
