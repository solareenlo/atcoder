#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string A, std::string B){
    if (A.size() > B.size()) cout << "GREATER" << '\n';
    else if(A.size() < B.size()) cout << "LESS" << '\n';
    else {
        bool loop = true;
        REP(i, A.size()) {
            if (A[i] == B[i]) continue ;
            if (A[i] > B[i]) {
                loop = false;
                cout << "GREATER" << '\n';
                break ;
            } else {
                loop = false;
                cout << "LESS" << '\n';
                break ;
            }
        }
        if (loop) cout << "EQUAL" << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string A;
    std::cin >> A;
    std::string B;
    std::cin >> B;
    solve(A, B);
    return 0;
}
