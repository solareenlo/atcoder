// Copyright

#include<iostream>

int main() {
    std::string s; std::cin >> s;
    char last = 'O';
    int cnt = 0;
    for (char c : s)
        if (last != c)
            last = c, cnt++;
    if (cnt && !(cnt % 2))
        cnt--;
    std::cout << cnt << std::endl;
}
