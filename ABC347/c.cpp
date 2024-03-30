#include <iostream>
#include <vector>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    std::vector<int> D(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> D[i];
    }

    bool can_all_holidays = true;
    for (int i = 0; i < N; ++i) {
        int day_in_week = D[i] % (A + B);
        if (day_in_week > A || day_in_week == 0) {
            can_all_holidays = false;
            break;
        }
    }

    if (can_all_holidays) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
