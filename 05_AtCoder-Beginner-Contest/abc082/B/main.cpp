#include <algorithm>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string s, std::string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<int>());
    if (s < t) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    std::string t;
    std::cin >> t;
    solve(s, t);
    return 0;
}
