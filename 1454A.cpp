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
		for (int i = 0; i < n - 1; i++) {
			std::cout << i + 2 << " ";
		}
		std::cout << 1 << std::endl;
	}
	return 0;
}
