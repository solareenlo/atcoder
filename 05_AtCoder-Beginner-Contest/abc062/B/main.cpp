#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    vector<string> str(h);
    REP(i, h) cin >> str[i];

    REP(i, w + 2) cout << '#';
    cout << '\n';

    REP(i, h) cout << '#' << str[i] << '#' << '\n';

    REP(i, w + 2) cout << '#';
    cout << '\n';
    return 0;
}
