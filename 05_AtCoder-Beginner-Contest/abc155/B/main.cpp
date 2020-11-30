#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, std::vector<long long> A){
    int countE = 0;
    int count = 0;
    REP(i, A.size()) {
        if (A[i] % 2 == 0) {
            countE++;
            if (A[i] % 3 == 0 || A[i] % 5 == 0)
                count++;
        }
    }
    if (countE == count) print("APPROVED");
    else print("DENIED");
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
