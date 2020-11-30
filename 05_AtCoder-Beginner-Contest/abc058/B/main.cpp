#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string O, std::string E){
    if (O.size() == E.size()) {
        REP(i, O.size())
            cout << O[i] << E[i];
        cout << '\n';
    } else {
        char c = O[O.size() - 1];
        REP(i, O.size() - 1)
            cout << O[i] << E[i];
        cout << c << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string O;
    std::cin >> O;
    std::string E;
    std::cin >> E;
    solve(O, E);
    return 0;
}
