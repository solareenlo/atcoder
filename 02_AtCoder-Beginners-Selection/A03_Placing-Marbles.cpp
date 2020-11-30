#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;
    int tmp = str[0] - '0' + str[1] - '0' + str[2] - '0';
    cout << tmp << '\n';
    return 0;
}
