#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::string S, std::string T){
    bool ans = true;
    REP(i, S.size()) {
        if (S[i] == T[i]) continue ;
        if (S[i] == '@')
            if (!(T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' ||
                    T[i] == 'd' || T[i] == 'e' || T[i] == 'r'))
                ans = false;
        if (T[i] == '@')
            if (!(S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' ||
                    S[i] == 'd' || S[i] == 'e' || S[i] == 'r'))
                ans = false;
        if (S[i] != '@' && T[i] != '@' && S[i] != T[i]) ans = false;
    }
    if (ans) print("You can win");
    else print("You will lose");
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    solve(S, T);
    return 0;
}
