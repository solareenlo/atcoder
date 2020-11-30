#include "bits/stdc++.h"
using namespace std;

// A と B に共通して含まれる要素からなる集合を返す
bitset<50> intersection(bitset<50> A, bitset<50> B) {
    return A & B;
}

// A と B のうち少なくとも一方に含まれる要素からなる集合を返す
bitset<50> union_set(bitset<50> A, bitset<50> B) {
    return A | B;
}

// A と B のうちどちらか一方にだけ含まれる要素からなる集合を返す
bitset<50> symmetric_diff(bitset<50> A, bitset<50> B) {
    return A ^ B;
}

// A に含まれる要素に1を加える(ただし、要素49が含まれる場合は0になるものとする)
bitset<50> increment(bitset<50> A) {
    if (A.test(49)) {
        A = A << 1;
        A.set(0, 1);
    } else {
        A = A << 1;
    }
    return A;
}

// A に含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> A) {
    if (A.test(0)) {
        A = A >> 1;
        A.set(49);
    } else {
        A = A >> 1;
    }
    return A;
}

// A から値 x を除く
bitset<50> subtract(bitset<50> A, int x) {
    A.set(x, 0);
    return A;
}

// S に値 x を加える
bitset<50> add(bitset<50> S, int x) {
    S.set(x, 1);
    return S;
}

// 集合 S の内容を昇順で出力する(スペース区切りで各要素の値を出力する)
void print_set(bitset<50> S) {
    vector<int> cont;
    for (int i = 0; i < 50; i++) {
        if (S.test(i)) {
            cont.push_back(i);
        }
    }
    for (int i = 0; i < cont.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << cont.at(i);
    }
    cout << endl;
}

int main(void) {
    bitset<50> A, B;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A = add(A, x);
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        B = add(B, x);
    }

    string com;
    cin >> com;

    if  (com == "intersection") {
        print_set(intersection(A, B));
    } else if (com == "union_set") {
        print_set(union_set(A, B));
    } else if (com == "symmetric_diff") {
        print_set(symmetric_diff(A, B));
    } else if (com == "subtract") {
        int x;
        cin >> x;
        print_set(subtract(A, x));
    } else if (com == "increment") {
        print_set(increment(A));
    } else if (com == "decrement") {
        print_set(decrement(A));
    }
    return 0;
}
