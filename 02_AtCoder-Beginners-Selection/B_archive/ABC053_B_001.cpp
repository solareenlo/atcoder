#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;

    int indexA, indexZ;
    indexA = str.find('A');
    indexZ = str.rfind('Z');

    cout << indexZ - indexA + 1 << '\n';
    return 0;
}
