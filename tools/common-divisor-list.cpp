// 2つの整数の公約数のリストを取得する
#include <iostream>
#include <set>
using namespace std;

template<class T>
set<T> divisorList(T n) {
    set<T> div;
    for (T i = 1; i <= n; i++) {
        if (n % i == 0){
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

template<class T>
set<T> commonDivList(T a, T b) {
    set<T> aDiv = divisorList(a);
    set<T> bDiv = divisorList(b);
    set<T> res;
    set_intersection(aDiv.begin(), aDiv.end(),
            bDiv.begin(), bDiv.end(),
            inserter(res, res.end()));
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    set<int> cdl = commonDivList(a, b);

    for (auto i : cdl)
        cout << i << ' ';

    cout << '\n';
    return 0;
}
