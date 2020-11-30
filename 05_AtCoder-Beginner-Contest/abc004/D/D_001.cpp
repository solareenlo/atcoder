#include <bits/stdc++.h>
using namespace std;
const int INF = 0x7ffffff;
int R, G, B;

int cnt(int p){
  //-100の地点から均等に行くようにするものか
  //pから全部Rを左に並べたものを最短にするか
  int le = min(p-R,-100-(R/2));
  //100から均等に並べたものか
  //pからひだりにズラって並べたもののどちらかで
  //真ん中に余力持てるものを採用する
  int re = max(p+G,100-(B/2));
  //calculation
  int ret = 0;
  //決めた点から左にズラって並べる
  //だけど全体的にみると左から並べてるだけで
  //しっかり中心が-100,0,100それぞれのところからずれたものになっている
  //後は最後に中心からどれくらいずれてるかをabs関数を使用しながら考える
  for(int i = p+G-1;i>=p;i--) ret += abs(i);
  for(int i = le+R-1;i>=le;i--) ret += abs(-100-i);
  for(int i = re+B-1;i>=re;i--) ret += abs(100-i);
    return ret;
}

int main() {
	cin >> R >> G >> B;
	int res = INF;
	for (int i = -300; i <= 300; i++)
		res = min(res, cnt(i));
	cout << res << '\n';
	return 0;
}
