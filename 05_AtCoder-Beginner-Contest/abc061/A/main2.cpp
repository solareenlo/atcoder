#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c >= a && c <= b) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
