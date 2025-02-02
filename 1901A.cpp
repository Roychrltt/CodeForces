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
		int n, x;
		std::cin >> n >> x;
		std::vector<int> v(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		int c = v[0];
		for (int i = 1; i < n; i++) {
			c = std::max(c, v[i] - v[i - 1]);
		}
		c = std::max(c, (x - v[n - 1]) * 2);
		std::cout << c << std::endl;
	}
	return 0;
}
