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
		if (a < b && b < c)
			std::cout << "STAIR" << std::endl;
		else if (a < b && b > c)
			std::cout << "PEAK" << std::endl;
		else
			std::cout << "NONE" << std::endl;
	}
	return 0;
}
