#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';
    int d = s[3] - '0';

    char op1, op2, op3;
    REP(i, 2) REP(j, 2) REP(k, 2) {
        if (i == 0) b *= -1;
        if (j == 0) c *= -1;
        if (k == 0) d *= -1;
        if (a + b + c + d == 7) {
            if (i == 0) op1 = '-';
            else op1 = '+';
            if (j == 0) op2 = '-';
            else op2 = '+';
            if (k == 0) op3 = '-';
            else op3 = '+';
        }
        a = s[0] - '0';
        b = s[1] - '0';
        c = s[2] - '0';
        d = s[3] - '0';
    }

    cout << s[0] << op1 << s[1] << op2 << s[2] << op3 << s[3] << "=7" << '\n';
    return 0;
}
