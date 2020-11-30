#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    set<int> a;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    if (a.size() == n) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
