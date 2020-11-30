#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    pair<int, int> a, b;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;

    int dx = b.first - a.first;
    int dy = b.second - a.second;

    pair<int, int> c, d;
    c.first = b.first - dy;
    c.second = b.second + dx;
    d.first = c.first - dx;
    d.second = c.second - dy;

    cout << c.first << ' ' << c.second << ' ';
    cout << d.first << ' ' << d.second << '\n';
    return 0;
}
