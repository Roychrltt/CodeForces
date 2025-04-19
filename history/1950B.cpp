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
		int n;
		std::cin >> n;
		for (int i = 0; i < n; ++i) {
			if (i & 1)
			{
				for (int j = 0; j < n; j++)
					std::cout << ((j & 1) ? "##" : "..");
				std::cout << std::endl;
				for (int j = 0; j < n; j++)
					std::cout << ((j & 1) ? "##" : "..");
				std::cout << std::endl;
			}
			else
			{
				for (int j = 0; j < n; j++)
					std::cout << ((j & 1) ? ".." : "##");
				std::cout << std::endl;
				for (int j = 0; j < n; j++)
					std::cout << ((j & 1) ? ".." : "##");
				std::cout << std::endl;
			}
		}
	}
	return 0;
}
