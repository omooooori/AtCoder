#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return (a * b) / gcd(a, b);}
template <typename T> inline T ceil(T a,T b) {return (a+(b-1))/b;}
template <typename T> inline T floor(T a,T b) {return a/b;}

int main() {
    int N = 0;
    cin >> N;
    int A = 0;
    int total = 0;
    for (int i = 0; i < N-1; ++i) {
      cin >> A;
      total += A;
    }
    cout << -total;
}
