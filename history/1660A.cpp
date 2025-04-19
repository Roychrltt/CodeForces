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
		int n, m;
		std::cin >> n >> m;
		if (n == 0)
			std::cout << 1 << std::endl;
		else
			std::cout << n + 2 * m + 1 << std::endl;
	}
	return 0;
}
