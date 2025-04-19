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
		std::vector<int> v(n);
		for (int i = 0; i < n * 2; i++) {
			int x;
			std::cin >> x;
			if (v[x - 1]++ == 0)
				std::cout << x << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
