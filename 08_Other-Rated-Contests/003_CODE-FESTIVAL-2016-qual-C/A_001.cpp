#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    std::string::size_type C = s.find('C');
    std::string::size_type F = s.rfind('F');

    if (C != std::string::npos && F != std::string::npos) {
        if (C < F) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    } else cout << "No" << '\n';
    return 0;
}
