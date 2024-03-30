#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::vector<int> divisors;
    for (int i = 0; i < N; ++i) {
        if (A[i] % K == 0) {
            divisors.push_back(A[i] / K);
        }
    }

    std::sort(divisors.begin(), divisors.end());

    for (size_t i = 0; i < divisors.size(); ++i) {
        if (i > 0) {
            std::cout << " ";
        }
        std::cout << divisors[i];
    }
    std::cout << std::endl;

    return 0;
}
