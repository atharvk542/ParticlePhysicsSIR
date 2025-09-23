#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<int> primes(int mod) {
	std::vector<int> out;
	int count[7] = {0}; // Count occurrences of each remainder

	// generate primes from 2 to 1000
	for (int i = 2; i <= 1000; i++) {
		bool is_prime = true;

		for (int j = 2; j <= std::sqrt(i); j++) {
			if (i % j == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) {
			int remainder = i % mod;
			out.push_back(remainder);
			count[remainder]++;
		}
	}

	std::cout << "Prime count by remainder:" << std::endl;
	for (int i = 0; i < 7; i++) {
		std::cout << "Remainder " << i << ": " << count[i] << std::endl;
	}

	return out;
}

int main() {
	std::vector<int> out = primes(7);
	std::sort(out.begin(), out.end());
	
	std::cout << "\nFirst 20 remainders: ";
	for (int i = 0; i < 20 && i < out.size(); i++) {
		std::cout << out[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}