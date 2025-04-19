#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		if (a == b)
			std::cout << 0 << std::endl;
		else
			std::cout << ((std::abs(a - b) + c - 1) / c + 1) / 2 << std::endl;
	}
	return 0;
}
