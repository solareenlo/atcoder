#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    set<char> abc;
    REP(i, S.size()) abc.insert(S[i]);
    if (abc.size() == 3) cout << YES << '\n';
    else cout << NO << '\n';
    return 0;
}
