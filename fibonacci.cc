#include <iostream>

const int NUM_FIBONACCIS = 10;

int main() {
    unsigned long long prev_one = 1;
    unsigned long long prev_two = 1;

    for(int i = 0; i < NUM_FIBONACCIS; ++i) {
        if(i < 2) {
            std::cout << "1" << '\n';
            continue;
        }

        unsigned long long cur = prev_one + prev_two;

        std::cout << cur << "\n";

        prev_one = prev_two;
        prev_two = cur;
    }

    return 0;
}