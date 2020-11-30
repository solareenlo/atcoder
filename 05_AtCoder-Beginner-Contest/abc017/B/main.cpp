#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "YES";
const string NO = "NO";

void solve(std::string X){
    bool ans = true;
    REP(i, X.size()) {
        if (X[i] == 'c' && X[i + 1] != 'h') {
            ans = false;
            break ;
        }
        if (X[i] == 'c') i++;
        else if (!(X[i] == 'o' || X[i] == 'k' || X[i] == 'u')) {
            ans = false;
            break ;
        }
    }
    if (ans) print(YES);
    else print(NO);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string X;
    std::cin >> X;
    solve(X);
    return 0;
}
