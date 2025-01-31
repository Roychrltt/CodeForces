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
		if (a > b)
			std::swap(a, b);
		int c = std::max(a * 2, b);
		std::cout << c * c << std::endl;
	}
	return 0;
}
