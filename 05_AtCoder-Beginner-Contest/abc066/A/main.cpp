#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> b(3);
    cin >> b[0] >> b[1] >> b[2];
    sort(b.begin(), b.end());
    cout << b[0] + b[1] << '\n';
    return 0;
}
