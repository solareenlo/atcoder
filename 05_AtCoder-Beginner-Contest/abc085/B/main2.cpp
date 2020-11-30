#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> mochi;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        mochi.insert(tmp);
    }
    cout << mochi.size() << '\n';
    return 0;
}
