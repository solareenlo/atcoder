#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int na, nb;
    cin >> na >> nb;

    multiset<int> a, b;
    REP(i, na) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    REP(i, nb) {
        int tmp;
        cin >> tmp;
        b.insert(tmp);
    }

    multiset<int> productSet;
    set_intersection(a.begin(), a.end(),
            b.begin(), b.end(),
            inserter(productSet, productSet.end()));

    double numP = (double)productSet.size();
    double numU = (double)a.size() + (double)b.size() - numP;
    double res = numP / numU;
    printf("%.10f\n", res);
    return 0;
}
