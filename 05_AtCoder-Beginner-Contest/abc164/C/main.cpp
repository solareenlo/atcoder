#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    set<string> flute;
    REP(i, n) {
        string tmp;
        cin >> tmp;
        flute.insert(tmp);
    }

    cout << flute.size() << '\n';
    return 0;
}
