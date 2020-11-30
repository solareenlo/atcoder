#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;

    int mini = 1000;
    REP(i, s.size() - 2) {
        string tmp = s.substr(i, 3);
        int a = abs(stoi(tmp) - 753);
        chmin(mini, a);
    }
    cout << mini << '\n';
    return 0;
}
