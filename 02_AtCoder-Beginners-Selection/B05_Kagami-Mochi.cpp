#include <iostream>
#include <set>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    set<int> d;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        d.insert(tmp);
    }

    cout << d.size() << '\n';
    return 0;
}
