#include <algorithm>
#include <cctype>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long A, long long B, std::string S){
    bool ans = true;
    if (S.substr(A, 1) != "-") ans = false;

    string s1 = S.substr(0, A);
    if (!(all_of(s1.cbegin(), s1.cend(), [](char ch) { return isdigit(ch); })))
        ans = false;

    string s2 = S.substr(A + 1);
    if (!(all_of(s2.cbegin(), s2.cend(), [](char ch) { return isdigit(ch); })))
        ans = false;
    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    cin >> A;
    long long B;
    cin >> B;
    string S;
    cin >> S;
    solve(A, B, S);
    return 0;
}
