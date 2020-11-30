#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int N = 100;
int col[N], row[N];
char a[N][N];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    REP(i, h) REP(j, w) cin >> a[i][j];

    REP(i, h) REP(j, w) {
        if (a[i][j] == '#') {
            col[i] = 1;
            row[j] = 1;
        }
    }

    REP(i, h) {
        if (col[i]) {
            REP(j, w)
                if (row[j])
                    cout << a[i][j];
            cout << '\n';
        }
    }
    return 0;
}
