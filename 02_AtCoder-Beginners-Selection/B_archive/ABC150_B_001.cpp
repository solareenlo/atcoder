#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    REP(i, n - 2) {
        if (s.substr(i, 3) == "ABC")
            count++;
    }

    cout << count << '\n';
    return 0;
}
