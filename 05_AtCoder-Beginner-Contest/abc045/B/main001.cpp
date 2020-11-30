#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S_A, std::string S_B, std::string S_C){
    int sum = S_A.size() + S_B.size() + S_C.size();
    char c = S_A[0];
    char win;
    REP(i, sum) {
        if (c == 'a') {
            if (S_A.size() == 0) {
                win = 'A';
                break ;
            }
            c = S_A[0];
            S_A.erase(0, 1);
        }
        else if (c == 'b') {
            if (S_B.size() == 0) {
                win = 'B';
                break ;
            }
            c = S_B[0];
            S_B.erase(0, 1);
        } else {
            if (S_C.size() == 0) {
                win = 'C';
                break ;
            }
            c = S_C[0];
            S_C.erase(0, 1);
        }
    }
    cout << win << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S_A;
    std::cin >> S_A;
    std::string S_B;
    std::cin >> S_B;
    std::string S_C;
    std::cin >> S_C;
    solve(S_A, S_B, S_C);
    return 0;
}
