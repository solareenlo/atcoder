#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long A, long long B, long long Q, std::vector<long long> s, std::vector<long long> t, std::vector<long long> x){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> s(A);
    for(int i = 0 ; i < A ; i++){
        scanf("%lld",&s[i]);
    }
    std::vector<long long> t(B);
    for(int i = 0 ; i < B ; i++){
        scanf("%lld",&t[i]);
    }
    std::vector<long long> x(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&x[i]);
    }
    solve(A, B, Q, std::move(s), std::move(t), std::move(x));
    return 0;
}
