#include <iostream>
using namespace std;

int main(void) {
    int a, b; cin >> a >> b;
    if (a * b % 2) cout << "Odd" << '\n';
    else cout << "Even" << '\n';
    return 0;
}
