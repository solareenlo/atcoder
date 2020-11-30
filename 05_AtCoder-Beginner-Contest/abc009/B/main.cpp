#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;

    set<int> dish;
    REP(i, N) {
        int tmp;
        cin >> tmp;
        dish.insert(tmp);
    }

    auto itr = dish.end();
    itr--;
    itr--;
    print(*itr);
    return 0;
}
