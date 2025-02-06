#include <bits/stdc++.h>

static void solve(void)
{
	int n, k, x;
	std::cin >> n >> k >> x;
	if (k == 1 || (n % 2 == 1 && x == 1 && k == 2))
		std::cout << "NO" << std::endl;
	else
	{
		std::cout << "YES" << std::endl;
		if (x != 1)
		{
			std::cout << n << std::endl;
			for (int i = 0; i < n; i++) {
				std::cout << "1 ";
			}
			std::cout << std::endl;
		}
		else if (n % 2)
		{
			std::cout << 1 + (n - 3) / 2 << std::endl;
			std::cout << "3 ";
			for (int i = 0; i < (n - 3) / 2; i++) {
				std::cout << "2 ";
			}
			std::cout << std::endl;
		}
		else
		{
			std::cout << n / 2 << std::endl;
			for (int i = 0; i < n / 2; i++) {
				std::cout << "2 ";
			}
			std::cout << std::endl;
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
