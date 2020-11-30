#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    vector<int> candy;
    REP(i, 3) {
        int tmp;
        cin >> tmp;
        candy.push_back(tmp);
    }
    sort(candy.begin(), candy.end());

    if (candy[0] + candy[1] == candy[2]) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
