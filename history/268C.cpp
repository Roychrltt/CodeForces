#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int x, y;
	std::cin >> x >> y;
	if (x == 0 && y == 0)
	{
		std::cout << 0 << std::endl;
		return 0;
	}
	else if (x == 0 || y == 0)
	{
		std::cout << 1 << std::endl;
		std::cout << std::min(x, y) << std::endl;
		std::cout << std::max(x, y) << std::endl;
		return 0;
	}
	else if (x > y)
	{
		std::cout << y + 1 << std::endl;
		for (int i = 0; i < y + 1; i++)
			std::cout << i << " " << y - i << std::endl;
	}
	else
	{
		std::cout << x + 1 << std::endl;
		for (int i = 0; i < x + 1; i++)
			std::cout << i << " " << x - i << std::endl;
	}
	__Made in France__
}
