#include <iostream>
#include <vector>
using namespace std;

void solve(std::vector<long long> A){
    if (A[0]+A[1]+A[2] >= 22) cout << "bust" << '\n';
    else cout << "win" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<long long> A(3);
    for(int i = 0 ; i < 3 ; i++){
        scanf("%lld",&A[i]);
    }
    solve(std::move(A));
    return 0;
}
