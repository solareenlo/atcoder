#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "YES";
const string NO = "NO";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    set<int> town;
    int tmp;
    cin >> tmp;
    town.insert(tmp);
    cin >> tmp;
    town.insert(tmp);

    int k;
    cin >> k;
    REP(i, k) {
        cin >> tmp;
        town.insert(tmp);
    }

    if (town.size() == 2 + k) print(YES);
    else print(NO);
    return 0;
}
