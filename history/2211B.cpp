/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	constexpr long long int MOD = 676767677;
	long long int x, y;
	std::cin >> x >> y;
	if (x == 1 && y == 0)
		std::cout << 1 << std::endl;
	else if (y == 1 && x == 0)
		std::cout << 1 << std::endl;
	else if (x == 0)
	{
		long long int ans = 0;
		for (int i = 1; i * i <= y; i++)
		{
			if (y % i == 0)
			{
				ans++;
				if (y / i != i) ans++;
			}
		}
		std::cout << ans << std::endl;
	}
	else if (y == 0)
	{
		long long int ans = 0;
		for (int i = 1; i * i <= x; i++)
		{
			if (x % i == 0)
			{
				ans++;
				if (x / i != i) ans++;
			}
		}
		std::cout << ans << std::endl;
	}
	else if (std::abs(x - y) <= 1)
		std::cout << 1 << std::endl;
	else if (x > y)
	{
		long long int ans = 0;
		int tmp = x - y;
		for (int i = 1; i * i <= tmp; i++)
		{
			if (tmp % i == 0)
			{
				ans++;
				if (tmp / i != i) ans++;
			}
		}
		std::cout << ans << std::endl;
	}
	else
	{
		long long int ans = 0;
		int tmp = y - x;
		for (int i = 1; i * i <= tmp; i++)
		{
			if (tmp % i == 0)
			{
				ans++;
				if (tmp / i != i) ans++;
			}
		}
		std::cout << ans << std::endl;
	}
	for (int i = 0; i < x; i++)
		std::cout << 1 << " ";
	for (int i = 0; i < y; i++)
		std::cout << -1 << " ";
	std::cout << std::endl;
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
	__Made in France__
}
