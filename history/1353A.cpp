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
		if (n == 1) std::cout << 0 << std::endl;
		else if (n == 2) std::cout << m << std::endl;
		else std::cout << m * 2 << std::endl;
	}
	return 0;
}
