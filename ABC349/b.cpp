#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return (a * b) / gcd(a, b);}
template <typename T> inline T ceil(T a,T b) {return (a+(b-1))/b;}
template <typename T> inline T floor(T a,T b) {return a/b;}

int main() {
    string S;
    cin >> S;
    map<char, int> counts;
    for (char c : S) {
        counts[c]++;
    }
    map<int, vector<char>> map;
    for (const auto& pair : counts) {
        map[pair.second].push_back(pair.first);
    }

    bool allZeroOrTwo = true;
    for (const auto& pair : map) {
        if (pair.second.size() != 0 && pair.second.size() != 2) {
            allZeroOrTwo = false;
            break;
        }
    }

    if (allZeroOrTwo) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
