#include <iostream>
using namespace std;

void solve(long long K, std::string S){
    if (S.size() <= K) cout << S << '\n';
    else cout << S.substr(0, K) << "..." << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    cin >> K;
    std::string S;
    std::cin >> S;
    solve(K, S);
    return 0;
}
