#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool isLeapYear (T y) {
    bool ok = false;
    if (y % 4 == 0) ok = true;
    if (y % 100 == 0) ok = false;
    if (y % 400 == 0) ok = true;
    return ok;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int divA4 = a / 4;
    int divA100 = a / 100;
    int divA400 = a / 400;
    int leapYearA = divA4 - divA100 + divA400;

    int divB4 = b / 4;
    int divB100 = b / 100;
    int divB400 = b / 400;
    int leapYearB = divB4 - divB100 + divB400;

    if (isLeapYear(a)) leapYearA--;
    cout << leapYearB - leapYearA << '\n';
    return 0;
}
