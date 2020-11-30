#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    set<string> s;
    REP(i, N) {
        string tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    if (s.size() == 4) cout << "Four" << '\n';
    else cout << "Three" << '\n';
    return 0;
}
