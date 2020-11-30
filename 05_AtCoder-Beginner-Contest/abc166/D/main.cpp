#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    int a = 0;
    int b = 0;
    for (int i = -150; i <= 150; i++) {
        for (int j = -150; j <= 150; j++) {
            if (pow(i, 5) - pow(j, 5) == x) {
                a = i;
                b = j;
            }
        }
    }

    cout << a << ' ' << b << '\n';
    return 0;
}
