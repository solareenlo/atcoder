#include <algorithm>
#include <iostream>
#include <map>
#include <set>
using namespace std;

set<int> divisorList(int n) {
    set<int> div;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0){
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

set<int> commonDivList(int a, int b) {
    set<int> aDiv = divisorList(a);
    set<int> bDiv = divisorList(b);
    set<int> res;
    set_intersection(aDiv.begin(), aDiv.end(),
            bDiv.begin(), bDiv.end(),
            inserter(res, res.end()));
    return res;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    set<int> divList = commonDivList(a, b);
    map<int, int> result;

    // auto itr = divList.rbegin();
    auto itr = divList.end();
    for (int i = 0; i < divList.size(); i++) {
        --itr;
        result[i] = *itr;
        // itr++;
    }

    cout << result[k - 1] << '\n';
    return 0;
}
