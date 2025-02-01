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
		if (b < c) b = c - b + c;
		if (a == b) std::cout << 3 << std::endl;
		else if (a < b) std::cout << 1 << std::endl;
		else std::cout << 2 << std::endl;
	}
	return 0;
}
