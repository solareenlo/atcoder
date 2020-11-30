#include <algorithm>
#include <iostream>
#include <map>
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

    map<string, int> name;
    REP(i, N) {
        string tmp;
        cin >> tmp;
        name.insert(make_pair(tmp, 0));
        name[tmp]++;
    }

    string ans;
    int maxi = 0;
    for (auto itr = name.begin(); itr != name.end(); itr++) {
        if (maxi < itr->second) {
            maxi = itr->second;
            ans = itr->first;
        }
    }
    print(ans);
    return 0;
}
