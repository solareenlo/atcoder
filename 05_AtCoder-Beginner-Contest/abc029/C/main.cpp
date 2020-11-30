#include <bits/stdc++.h>
using namespace std;

void f(int rest, string s) {
    if (rest == 0)
        cout << s << '\n';
    else
        for (char c = 'a'; c <= 'c'; c++)
            f(rest - 1, s + c);
}

int main() {
    int n;
    cin >> n;

    f(n, "");
    return 0;
}
