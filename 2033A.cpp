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
		if (n & 1)
			std::cout << "Kosuke" << std::endl;
		else
			std::cout << "Sakurako" << std::endl;
	}
	return 0;
}
