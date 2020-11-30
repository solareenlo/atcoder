#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i+=2) {
        int div = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
                div++;
        }
        if (div == 8)
            count++;
    }

    cout << count << '\n';
    return 0;
}
