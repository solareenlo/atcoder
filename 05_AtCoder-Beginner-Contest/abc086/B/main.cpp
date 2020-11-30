#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    int n = stoi(a + b);
    int sqr = (int)sqrt(n);
    if (sqr * sqr == n) cout << YES << '\n';
    else cout << NO << '\n';
    return 0;
}
