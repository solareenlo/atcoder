#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());

    bool ans = false;
    if (s < t)
        ans = true;

    if (ans)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}
