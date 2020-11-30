// 約数のリストを取得する
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

template<class T>
inline set<T> divisorsList(T n) {
    set<T> div;
    for (T i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

int main() {
    int a;
    cin >> a;

    set<int> div = divisorsList(a);

    for (int n : div)
        cout << n << ' ';
    cout << '\n';
    return 0;
}
