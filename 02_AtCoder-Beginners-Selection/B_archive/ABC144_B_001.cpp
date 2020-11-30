#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    bool ans = false;
    for (int i = 1; i < 10; ++i)
        for (int j = 1; j < 10; ++j)
            if (i * j == n)
                ans = true;

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
