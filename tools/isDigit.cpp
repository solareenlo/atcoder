#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool ans = false;
    if (all_of(s.cbegin(), s.cend(), [](char ch) {return isdigit(ch);}))
        ans = true;

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
