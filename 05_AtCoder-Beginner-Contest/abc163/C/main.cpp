#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    map<int, int> m;
    REP(i, n) m.insert(make_pair(i, 0));

    REP(i, n - 1) {
        int tmp;
        cin >> tmp;
        --tmp;
        m[tmp]++;
    }

    REP(i, n)
        cout << m[i] << '\n';
    return 0;
}
