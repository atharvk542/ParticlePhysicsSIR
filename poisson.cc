// Atharv Kanchi - Poisson probability calculation function
#include <iostream>
#include <cmath>

int factorial(int x) {
	// usage: factorial(x) = x!
	if (x == 0) {
		return 1;
	}

	return x * factorial(x - 1);
}

double pow(double a, double b) {
	// usage: pow(a, b) = a^b

	// this has imprecision, so you would need to compare with some epsilon, but this is fine for now
	if (b == 0) {
		return 1.0;
	}

	return a * pow(a, b-1);
}

double poisson(double mu, int n) {
	return std::exp(-mu) * pow(mu, n) / factorial(n);
}

void poisson_num_probs(double mu) {
	for (int i = 1; i <= 10; ++i) {
		double prob = poisson(mu, i);
		std::cout << "Probability of number " << i << ": " << prob << " = " << prob * 100 << "%" << '\n';
	}
}

int main() {
	poisson_num_probs(4);
}