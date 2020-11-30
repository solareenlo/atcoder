#include <algorithm>
#include <iostream>
using namespace std;

const string YES = "YES";
const string NO = "NO";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    if (a == b) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
