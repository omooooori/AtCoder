#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cctype>
using namespace std;

template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return (a * b) / gcd(a, b);}
template <typename T> inline T ceil(T a,T b) {return (a+(b-1))/b;}
template <typename T> inline T floor(T a,T b) {return a/b;}

int main() {
    string S, T;
    cin >> S;
    cin >> T;

    if (T.back() == 'X') {
        T.pop_back();
    }

    int start = 0;
    for (int i = 0; i < T.size(); ++i) {
        bool found = false;
        for (int j = start; j < S.size(); ++j) {
	    if (S[j] == tolower(T[i])) {
  	        start = j+1;
		found = true;
		break;
	    }
        }
	if (!found) {
            cout << "No" << endl;
	    return 0;
	}
    }
    cout << "Yes" << endl;
    return 0;
}
