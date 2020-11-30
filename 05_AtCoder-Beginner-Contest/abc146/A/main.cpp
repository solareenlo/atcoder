#include <iostream>
#include <map>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::string S){
    map<string, int> week;
    week.insert(make_pair("MON", 0));
    week.insert(make_pair("TUE", 1));
    week.insert(make_pair("WED", 2));
    week.insert(make_pair("THU", 3));
    week.insert(make_pair("FRI", 4));
    week.insert(make_pair("SAT", 5));
    week.insert(make_pair("SUN", -1));
    print(6 - week[S]);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
