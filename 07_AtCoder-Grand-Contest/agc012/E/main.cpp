#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Possible";
const string NO = "Impossible";

void solve(long long N, long long V, std::vector<long long> x){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long V;
    scanf("%lld",&V);
    std::vector<long long> x(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
    }
    solve(N, V, std::move(x));
    return 0;
}
