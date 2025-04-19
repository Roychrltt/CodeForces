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
		if (n % 3)
			std::cout << "First" << std::endl;
		else
			std::cout << "Second" << std::endl;
	}
	return 0;
}
