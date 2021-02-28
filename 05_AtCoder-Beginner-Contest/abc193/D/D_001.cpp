#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int n, t1[10], t2[10], sum1, sum2;
string a, b;
double res;
int main() {
  cin >> n >> a >> b;
  REP(i, 4) t1[a[i]-'0']++, t2[b[i]-'0']++;
  REP(i, 10) sum1 += i*pow(10, t1[i]), sum2 += i*pow(10, t2[i]);
  for (int i=1; i<10; i++) for (int j=1; j<10; j++) {
    int A = sum1+9*i*pow(10,t1[i]);
    int T = sum2+9*j*pow(10,t2[j]);
    if (A>T) res += 1.0*(n-t1[i]-t2[i])/(9*n-8)*(n-t1[j]-t2[j]-(i==j))/(9*n-9);
  }
  printf("%.10f\n", res);
  return 0;
}
