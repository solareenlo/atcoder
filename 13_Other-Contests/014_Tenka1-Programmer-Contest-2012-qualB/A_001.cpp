#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i <= 127; i++) {
        if (i % 3 == a)
            if (i % 5 == b)
                if (i % 7 == c)
                    cout << i << '\n';
    }
    return 0;
}
