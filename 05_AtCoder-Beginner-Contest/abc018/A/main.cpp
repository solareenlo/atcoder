#include <iostream>
#include <algorithm>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}


void solve(long long A, long long B, long long C){
    vector<int> point;
    point.push_back(A);
    point.push_back(B);
    point.push_back(C);
    vector<int> tmp(point.size());
    copy(point.begin(), point.end(), tmp.begin());
    sort(point.begin(), point.end(), greater<int>());
    REP(i, 3) {
        if (tmp[i] == point[0]) print(1);
        if (tmp[i] == point[1]) print(2);
        if (tmp[i] == point[2]) print(3);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    solve(A, B, C);
    return 0;
}
