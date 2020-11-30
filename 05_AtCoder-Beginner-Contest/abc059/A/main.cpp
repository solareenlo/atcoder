#include <iostream>
#include <vector>
using namespace std;

void solve(std::vector<std::string> s){
    cout << (char)toupper(s[0][0]) << (char)toupper(s[1][0]) << (char)toupper(s[2][0]) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::string> s(3);
    for(int i = 0 ; i < 3 ; i++){
        std::cin >> s[i];
    }
    solve(std::move(s));
    return 0;
}
