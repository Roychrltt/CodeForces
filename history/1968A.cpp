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
		int ans = -1, res = 1;
		for (int i = 1; i < n; i++) {
			if (std::gcd(n, i) + i > ans)
			{
				ans = std::gcd(n, i) + i;
				res = i;
			}
		}
		std::cout << res << std::endl;
	}
	return 0;
}
