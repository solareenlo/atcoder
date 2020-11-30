#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "YES";
const string NO = "NO";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> one(2), two(2);
    REP(i, 2) cin >> one[i];
    REP(i, 2) cin >> two[i];

    bool ans = false;
    REP(i, 2) {
        REP(j, 2) {
            if (one[i] == two[j]) {
                ans = true;
                break ;
            }
        }
        if (ans) break ;
    }

    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
    return 0;
}
