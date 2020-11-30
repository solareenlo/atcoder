#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s; cin >> s;
    cout << s[0] + to_string(s.size() - 2) + s[s.size() - 1] << '\n';
    return 0;
}
