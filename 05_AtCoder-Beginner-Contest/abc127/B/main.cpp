#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r, d, x;
    cin >> r >> d >> x;

    REP(i, 10) {
        int tmp = r * x - d;
        cout << tmp << '\n';
        x = tmp;
    }
    return 0;
}
