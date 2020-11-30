#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<int> road;
    vector<int> count(n + 1, -1);
    int tail = 0;
    int loop = 1;

    int v = 1;
    while (count[v] == -1) {
        count[v] = road.size();
        road.push_back(v);
        v = a[v - 1];
    }
    tail = count[v];
    loop = road.size() - tail;

    if (k < tail) cout << road[k] << '\n';
    else {
        k -= tail;
        k %= loop;
        cout << road[tail + k] << '\n';
    }
    return 0;
}
