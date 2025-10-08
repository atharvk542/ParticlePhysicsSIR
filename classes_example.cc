#include <iostream>
#include "Date.cc"

int main() {

	Date date = {6, 7, 2008};
	std::cout << "year: " << date.getYear() << '\n';
	return 0;
}