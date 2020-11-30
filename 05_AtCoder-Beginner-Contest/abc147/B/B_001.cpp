#include <algorithm>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S){
    int n;
    if (S.size() % 2) n = S.size()/2 + 1;
    else n = S.size()/2;
    string s1 = S.substr(0, n);
    string s2 = S.substr(n);
    reverse(s2.begin(), s2.end());
    int count = 0;
    REP(i, S.size()/2)
        if (s1[i] != s2[i]) count++;
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
