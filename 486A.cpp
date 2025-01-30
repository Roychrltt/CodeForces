#include <bits/stdc++.h>

int main()
{
	long long int t;
	std::cin >> t;
	long long int s = 1;
	if (std::abs(t) & 1) s = -1;
	std::cout << (std::abs(t) + 1) / 2 * s << std::endl;
	return 0;
}
