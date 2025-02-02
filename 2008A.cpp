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
		if (n & 1)
			std::cout << "NO" << std::endl;
		else if ((m & 1) && n == 0)
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}
	return 0;
}
