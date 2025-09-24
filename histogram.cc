#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

std::vector<int> histogram(std::vector<int> in, int bins, int min, int max);
std::vector<int> primes(int mod);
std::vector<std::string> hist_tostr(std::vector<int> hist_out);
void print_to_terminal(std::vector<std::string> strings);

int main() 
{
	std::vector<int> out = primes(7);
	std::vector<int> hist_out = histogram(out, 7, 0, 6);
	std::vector<std::string> strings = hist_tostr(hist_out);
	print_to_terminal(strings);
}

std::vector<int> histogram(std::vector<int> in, int bins, int min, int max) 
{
	std::sort(in.begin(), in.end());
	
	int range = max - min + 1;  // +1 because we're dealing with inclusive integer ranges, so this is (0, 6] for primes mod 7 for example
	
	std::vector<int> out(bins, 0);

	for (int value : in) 
	{
		if (value >= min && value <= max) // this is simplified
		{
			// automatically truncated to an int, so no rounding needed
			int bin_width = bins / range;
			int bin_index = (value - min) * bin_width; // take the "true value" of the input and scale by width
			// ensure we don't go out of bounds for the last bin
			if (bin_index >= bins) bin_index = bins - 1;
			out[bin_index]++;
		}
	}

	return out;
}

std::vector<int> primes(int mod) 
{
	std::vector<int> out;

	// generate primes from 2 to 1000
	for (int i = 2; i <= 1000; i++) 
	{
		bool is_prime = true;

		for (int j = 2; j <= std::sqrt(i); j++) 
		{
			if (i % j == 0) 
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime) 
		{
			out.push_back(i % mod);
		}
	}

	return out;

}

std::vector<std::string> hist_tostr(std::vector<int> hist_out) 
{
	std::vector<std::string> out;
	
	for (int i = 1; i <= hist_out.size(); i++) 
	{
		std::string cur = "Bin #";
		cur.append(std::to_string(i));
		cur.append(": ");
		cur.append(std::to_string(static_cast<int>(hist_out[i - 1])));
		
		out.push_back(cur);
	}

	return out;
}

void print_to_terminal(std::vector<std::string> strings) 
{
	for (std::string line : strings) 
	{
		std::cout << line << '\n';
	}
}


