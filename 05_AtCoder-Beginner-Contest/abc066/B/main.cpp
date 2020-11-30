#include <iostream>
using namespace std;

void solve(std::string S){
    bool ans = true;
    int count = 0;
    while (true) {
        S.erase(S.end() - 1);
        count++;
        if (S.size() % 2) continue ;
        int mid = S.size() / 2;
        if (S.substr(0, mid) == S.substr(mid))
            break ;
    }
    cout << S.size() << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
