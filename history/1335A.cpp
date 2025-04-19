#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int x;
		std::cin >> x;
		if (x < 3)
			std::cout << 0 << std::endl;
		else
			std::cout << (x - 1) / 2 << std::endl;
	}
	return 0;
}
