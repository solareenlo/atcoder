#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::vector<std::string> c){
    cout << c[0][0] << c[1][1] << c[2][2] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::string> c(3);
    for(int i = 0 ; i < 3 ; i++){
        std::cin >> c[i];
    }
    solve(std::move(c));
    return 0;
}
