#include <iostream>
#include <vector>
using namespace std;

void solve(std::vector<long long> l){
    if (l[0] == l[1]) cout << l[2] << '\n';
    else if (l[0] == l[2]) cout << l[1] << '\n';
    else cout << l[0] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<long long> l(3);
    for(int i = 0 ; i < 3 ; i++){
        scanf("%lld",&l[i]);
    }
    solve(std::move(l));
    return 0;
}
