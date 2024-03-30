#include <iostream>
#include <bitset>
using namespace std;

// ビットの数を数える関数
int popcount(long long x) {
    return __builtin_popcountll(x);
}

int main() {
    int a, b;
    long long C;
    cin >> a >> b >> C;

    long long X = 0;
    for (int i = 59; i >= 0; --i) {
        if (a > 0 && (C & (1LL << i))) {
            X |= (1LL << i);
            --a;
        }
    }

    long long Y = C ^ X;

    if (popcount(X) == a && popcount(Y) == b && (X ^ Y) == C) {
        cout << X << " " << Y << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
