#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main(void) {
    vector<int> nums (3);
	iota(nums.begin(), nums.end(), 0);
    do {
        printVector(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}
