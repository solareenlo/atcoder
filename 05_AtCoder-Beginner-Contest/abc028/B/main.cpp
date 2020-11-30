#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S){
    map<char, int> str;
    str.insert(make_pair('A', 0));
    str.insert(make_pair('B', 0));
    str.insert(make_pair('C', 0));
    str.insert(make_pair('D', 0));
    str.insert(make_pair('E', 0));
    str.insert(make_pair('F', 0));
    REP(i, S.size())
        str[S[i]]++;
    for (auto itr = str.begin(); itr != str.end(); itr++) {
        cout << itr->second;
        if (distance(str.begin(), itr) != distance(str.begin(), str.end()) - 1)
            cout << ' ';
    }
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
