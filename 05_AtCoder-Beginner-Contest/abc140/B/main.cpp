#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){
    long long sum = 0;
    REP(i, N) {
        if (A[i] == N - 1) sum += B[A[i]];
        else if (A[i]+1 == A[i+1]) sum += B[A[i]] + C[A[i]];
        else sum += B[A[i]];
    }
    cout << sum << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++) {
        long long tmp;
        cin >> tmp;
        A[i] = tmp - 1;
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++)
        cin >> B[i];
    std::vector<long long> C(N-1);
    for(int i = 0 ; i < N-1 ; i++)
        cin >> C[i];
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
