#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string n;
    cin >> n;
    REP(i, 3) {
        if (n[i] == '1') n[i] = '9';
        else if (n[i] == '9') n[i] = '1';
    }
    cout << n << '\n';
    return 0;
}
