#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "YES";
const string NO = "NO";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> haiku;
    REP(i, 3) {
        int tmp;
        cin >> tmp;
        haiku.push_back(tmp);
    }
    sort(haiku.begin(), haiku.end());
    if (haiku[0] == 5 && haiku[1] == 5 && haiku[2] == 7)
        cout << YES << '\n';
    else cout << NO << '\n';
    return 0;
}
