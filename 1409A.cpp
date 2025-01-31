#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << (std::abs(a - b) + 9) / 10 << std::endl;
	}
	return 0;
}
