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
		int n, x;
		std::cin >> n >> x;
		if (n <= 2)
		{
			std::cout << 1 << std::endl;
			continue;
		}
		std::cout << (n - 2 + x - 1) / x + 1 << std::endl;
	}
	return 0;
}
