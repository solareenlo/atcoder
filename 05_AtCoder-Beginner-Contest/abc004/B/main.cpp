#include <iostream>
#include <vector>
using namespace std;

void solve(std::vector<std::vector<std::string>> c){
    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= 0; j--) {
            cout << c[i][j];
            if (j != 0) cout << ' ';
        }
        cout << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::vector<std::string>> c(3-0+1, std::vector<std::string>(3-0+1));
    for(int i = 0 ; i < 3-0+1 ; i++){
        for(int j = 0 ; j < 3-0+1 ; j++){
            std::cin >> c[i][j];
        }
    }
    solve(std::move(c));
    return 0;
}
