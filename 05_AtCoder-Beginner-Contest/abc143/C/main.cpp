#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;

    int count = 0;
    REP(i, n)
        if (s[i] != s[i + 1]) count++;
    cout << count << '\n';
    return 0;
}
