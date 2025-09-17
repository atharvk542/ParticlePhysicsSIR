#include <iostream>

int factorial(int x) {
	if (x == 0) {
		return 1;
	}

	return x * factorial(x - 1);
}

int main() {
	int x = 4;
	std::cout << "Factorial of " << x << ": " << factorial(4) << '\n';
}