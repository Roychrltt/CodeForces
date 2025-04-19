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
		if (a < b) std::swap(a, b);
		if (a - b >= b && 2 * (a - b) >= c)
			std::cout << (c <= a - b ? c + a - b : c - a + b) << std::endl;
		else
			std::cout << -1 << std::endl;
	}
	return 0;
}
