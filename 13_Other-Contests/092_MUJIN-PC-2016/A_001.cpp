#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    char c;
    cin >> c;
    if (c == 'O' || c == 'P' || c == 'K' || c == 'L') cout << "Right" << '\n';
    else cout << "Left" << '\n';
    return 0;
}
