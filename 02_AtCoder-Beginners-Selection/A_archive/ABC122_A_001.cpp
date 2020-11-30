#include <iostream>
using namespace std;

int main() {
    char b;
    cin >> b;

    if (b == 'A') cout << 'T' << '\n';
    if (b == 'T') cout << 'A' << '\n';
    if (b == 'C') cout << 'G' << '\n';
    if (b == 'G') cout << 'C' << '\n';
    return 0;
}
