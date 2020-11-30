#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    map<int, bool> s;
    REP(i, n)
        s.insert(make_pair(i, false));

    REP(i, k) {
        int tmp; cin >> tmp;
        REP(j, tmp) {
            int tmp2; cin >> tmp2;
            s[tmp2 - 1] = true;
        }
    }

    int count = 0;
    for (auto [k, v] : s) {
        if (v == false) count++;
    }
    cout << count << '\n';
    return 0;
}
