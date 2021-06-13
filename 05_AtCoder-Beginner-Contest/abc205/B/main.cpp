#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    std::set<int> a;
    REP(i, n) {
        int A; std::cin >> A;
        a.insert(A);
    }
    std::cout << (a.size() == n ? "Yes" : "No") << std::endl;
    return 0;
}
