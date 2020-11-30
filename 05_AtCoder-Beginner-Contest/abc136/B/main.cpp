#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        string tmp = to_string(i);
        if (tmp.size() % 2)
            count++;
    }

    cout << count << '\n';
    return 0;
}
