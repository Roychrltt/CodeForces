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
		int a, b;
		std::cin >> a >> b;
		if (b == a) std::cout << 0 << std::endl;
		else if ((b > a && (b - a) % 2 == 1) || (b < a && (a - b) % 2 == 0)) std::cout << 1 << std::endl;
		else std::cout << 2 << std::endl;
	}
	return 0;
}
