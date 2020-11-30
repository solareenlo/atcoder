#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    s.replace(3, 1, "8");
    cout << s << '\n';
    return 0;
}
