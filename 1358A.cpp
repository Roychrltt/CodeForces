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
		int m, n;
		std::cin >> m >> n;
		std::cout << (m * n + 1) / 2 << std::endl;
	}
	return 0;
}
