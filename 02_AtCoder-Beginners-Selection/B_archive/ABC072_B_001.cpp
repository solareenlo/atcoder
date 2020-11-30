#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;

    string tmp;
    REP(i, str.size()) {
        if (i % 2 == 0)
            tmp += str[i];
    }

    cout << tmp << '\n';
    return 0;
}
