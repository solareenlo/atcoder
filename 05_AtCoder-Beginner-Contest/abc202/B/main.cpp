#include <algorithm>
#include <iostream>
#include <string>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    std::string s; std::cin >> s;
    reverse(s.begin(), s.end());
    REP(i, (int)s.size()) {
        if (s[i] == '6')
            std::cout << '9';
        else if (s[i] == '9')
            std::cout << '6';
        else
            std::cout << s[i];
    }
    std::cout << '\n';
    return 0;
}
