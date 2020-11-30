#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> hon;
    hon.insert(make_pair(0, "pon"));
    hon.insert(make_pair(1, "pon"));
    hon.insert(make_pair(2, "hon"));
    hon.insert(make_pair(3, "bon"));
    hon.insert(make_pair(4, "hon"));
    hon.insert(make_pair(5, "hon"));
    hon.insert(make_pair(6, "pon"));
    hon.insert(make_pair(7, "hon"));
    hon.insert(make_pair(8, "pon"));
    hon.insert(make_pair(9, "hon"));

    int n;
    cin >> n;
    cout << hon[n % 10] << '\n';
    return 0;
}
