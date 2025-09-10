#include <iostream>
#include <cmath>

const int TOP_BOUND = 1000;

int main() {
    for (int i = 1; i <= TOP_BOUND; ++i) {
        bool is_prime = true;
        for (int j = 2; j <= std::floor(std::sqrt(i)); j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            std::cout << i << '\n';
        }
    }
}