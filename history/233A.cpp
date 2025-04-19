#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	if (t & 1)
	{
		std::cout << -1 << std::endl;
		return 0;
	}
	for (int i = 0; i < t; i++) {
		std::cout << (i & 1 ? i : i + 2) << " ";
	}
	std::cout << std::endl;
	return 0;
}
