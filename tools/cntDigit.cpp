// 桁数をカウントする
#include <bits/stdc++.h>

template<class T>
inline T cntDigit(T num) {
	T cnt = 0;
	while (num) {
		num /= 10;
		cnt++;
	}
	return cnt;
}
