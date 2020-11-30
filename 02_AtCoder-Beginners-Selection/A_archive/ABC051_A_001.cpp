#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    replace(s.begin(), s.end(), ',', ' ' );
    cout << s << '\n';
    return 0;
}
