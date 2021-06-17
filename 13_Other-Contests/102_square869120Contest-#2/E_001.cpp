#include <iostream>
#include <string>
#include <vector>
#include <atcoder/string>

int main() {
    std::string s; std::cin >> s;
    int64_t res = 0;
    for (int i = 1; i <= static_cast<int>(s.size()); i++)
        res += i * (s.size() - i + 1);
    std::vector<int> sa = atcoder::suffix_array(s);
    for (auto x : atcoder::lcp_array(s, sa))
        res -= x * (x+1) / 2;
    std::cout << res << std::endl;
    return 0;
}
