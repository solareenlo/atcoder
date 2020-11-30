#include <bits/stdc++.h>
using namespace std;

void f(int rest, string s) {
    if (rest == 0)
        cout << s << '\n';
    else
        for (char c = 'a'; c <= 'c'; c++)
            f(rest - 1, s + c);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    f(n, "");
    return 0;
}
