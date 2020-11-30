#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string str; cin >> str;
    cout << str.replace(3, 1, "8") << '\n';
    return 0;
}
