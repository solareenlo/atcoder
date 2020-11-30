#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string day;
    cin >> day;
    if (day == "Monday") cout << 5 << '\n';
    else if (day == "Tuesday") cout << 4 << '\n';
    else if (day == "Wednesday") cout << 3 << '\n';
    else if (day == "Thursday") cout << 2 << '\n';
    else if (day == "Friday") cout << 1 << '\n';
    else cout << 0 << '\n';

    return 0;
}
