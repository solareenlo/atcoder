#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
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

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const int INF = 2002002002;

void solve(int H, int W, std::vector<std::string> S){
    vector<vector<int> > map(H, vector<int> (W, 0));
    REP(i, S.size()) REP(j, S[i].size()) {
        if (S[i][j] == '#') {
            for (int x = -1; x <= 1; x++)
                for (int y = -1; y <= 1; y++)
                    if (i + x >= 0 && i + x < H && j + y >= 0 && j + y < W)
                        if (S[i + x][j + y] != '#')
                            map[i + x][j + y]++;
        }
    }

    REP(i, H) {
        REP(j, W) {
            if (S[i][j] == '#') cout << '#';
            else cout << map[i][j];
        }
        cout << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int H;
    cin >> H;
    int W;
    cin >> W;
    std::vector<std::string> S(H);
    for(int i = 0 ; i < H ; i++){
        std::cin >> S[i];
    }
    solve(H, W, std::move(S));
    return 0;
}
