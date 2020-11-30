#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<vector<int>> A(3, vector<int>(3));
    REP(i, 3) REP(j, 3) cin >> A[i][j];

    int N;
    cin >> N;

    std::vector<int> b(N);
    REP(k, N) {
        int tmp; cin >> tmp;
        REP(i, 3) REP(j, 3)
            if (A[i][j] == tmp) A[i][j] = 0;
    }

    bool ans = false;
    REP(i, 3) {
        int sum = 0;
        REP(j, 3)
            sum += A[i][j];
        if (sum == 0) ans = true;
    }

    REP(j, 3) {
        int sum = 0;
        REP(i, 3)
            sum += A[i][j];
        if (sum == 0) ans = true;
    }

    if (A[0][0] + A[1][1] + A[2][2] == 0) ans = true;
    if (A[0][2] + A[1][1] + A[2][0] == 0) ans = true;

    if (ans) cout << YES << '\n';
    else cout << NO << '\n';

    return 0;
}
