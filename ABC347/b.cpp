#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    vector<int> D(N);
    for (int i = 0; i < N; ++i) {
        cin >> D[i];
    }
    
    int cycle = A + B;
    bool all_holidays = true;
    for (int i = 0; i < N; ++i) {
        int day_in_cycle = D[i] % cycle;
        if (!(day_in_cycle >= 1 && day_in_cycle <= A)) {
            all_holidays = false;
            break;
        }
    }
    if (all_holidays) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
