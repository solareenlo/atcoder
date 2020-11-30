#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, int> student;
    REP(i, n) {
        int a;
        cin >> a;
        student[a] = i + 1;
    }

    for (auto itr = student.rbegin(); itr != student.rend(); itr++)
        cout << itr->second << '\n';
    return 0;
}
