#include <iostream>
using namespace std;

void solve(std::string X, std::string Y){
    if (X < Y) cout << '<' << '\n';
    else if (X > Y) cout << '>' << '\n';
    else cout << '=' << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string X;
    std::cin >> X;
    std::string Y;
    std::cin >> Y;
    solve(X, Y);
    return 0;
}
