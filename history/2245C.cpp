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
	int n, p;
	std::cin >> n >> p;
	if (p == 0 && n < 3)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (__builtin_clz(p) < __builtin_clz(n) || (__builtin_popcount(n) == 1 && __builtin_clz(p) > __builtin_clz(n)))
	{
		std::cout << "NO" << std::endl;
		return;
	}
	std::cout << "YES" << std::endl;
	if (p == n)
	{
		for (int i = 1; i < n; i++)
			std::cout << i << " ";
		std::cout << 0 << std::endl;
		return;
	}
	if (n > 1 && !p)
	{
		int x = (1 << (32 - __builtin_clz(n) - 1));
		int xx = n ^ x;
		for (int i = 1; i < n; i++)
			if (i != x && i != xx) std::cout << i << " ";
		std::cout << "0 " << xx << " " << x << std::endl;
	}
	else
	{
		int x = p ^ n;
		if (x < n)
		{
			for (int i = 1; i < n; i++)
				if (i != x) std::cout << i << " ";
			std::cout << "0 " << x << std::endl;
		}
		else
		{
			int xx = (1 << (32 - __builtin_clz(n) - 1));
			int xxx = x ^ xx;
			for (int i = 1; i < n; i++)
				if (i != xx && i != xxx) std::cout << i << " ";
			std::cout << "0 " << xxx << " " << xx << std::endl;
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
	__Made in France__
}
