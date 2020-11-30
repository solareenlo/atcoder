#include <iostream>
#define REP(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;

    int count = 0;
    REP(i, 3)
        if (str[i] == 'o') count++;

    cout << 700 + 100 * count << '\n';
    return 0;
}
