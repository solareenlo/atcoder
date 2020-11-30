#include <iostream>
#include <vector>
using namespace std;

void solve(std::vector<long long> s, std::vector<long long> e){
    cout << (s[0] * e[0] + s[1] * e[1] + s[2] * e[2]) * 0.1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<long long> s(3);
    std::vector<long long> e(3);
    for(int i = 0 ; i < 3 ; i++){
        scanf("%lld",&s[i]);
        scanf("%lld",&e[i]);
    }
    solve(std::move(s), std::move(e));
    return 0;
}
