#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(vec) (vec).begin(), (vec).end()
#define SUM(...) accumulate(ALL(__VA_ARGS__),0LL)
#define DSUM(...) accumulate(ALL(__VA_ARGS__),0.0)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 便利関数
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define dbg cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

// 初期時読み込み
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(15);};}initial_;

const int INF = 2002002002;

void solve(std::string S){
    S.replace(3, 1, "8");
    print(S);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
