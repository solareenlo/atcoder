#include <iostream>
using namespace std;

int main(void) {
    string str; cin >> str;
    cout << str[0] - '0' + str[1] - '0' + str[2] - '0' << '\n';
    return 0;
}
