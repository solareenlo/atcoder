#include <iostream>
using namespace std;

int main(void) {
    int n, a; cin >> n >> a;
    if (n % 500 <= a) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
