#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(void) {
    string str; cin >> str;
    int sum = 0;
    REP(i, 3) {
        int tmp = 0;
        if (str[i] == 'o') tmp = 1;
        else tmp = 0;
        sum += tmp;
    }
    cout << 700 + 100 * sum << '\n';
    return 0;
}
