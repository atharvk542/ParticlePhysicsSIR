#include <iostream>

int pow(int a, int b) {
	// usage: pow(a, b) = a^b
	if (b == 0) {
		return 1;
	}

	return a * pow(a, b-1);
}

int main() {
	int a = 2;
	int b = 7;
	std::cout << a << "^" << b << " = " << pow(a, b) << '\n';
}