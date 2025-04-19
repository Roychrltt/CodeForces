#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	double sum = t;
	double count = 0;
	while (t--)
	{
		int c;
		std::cin >> c;
		count += c;
	}
	std::cout.precision(12);
	std::cout << count / sum << std::endl;
	return 0;
}
