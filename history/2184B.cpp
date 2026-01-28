#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int s, k, m;
	std::cin >> s >> k >> m;
	if (s <= k)
	{
		int n = m % k;
		if (n == 0)
		{
			std::cout << s << std::endl;
			return;
		}
		std::cout << std::max(0, s - n) << std::endl;
	}
	else
	{
		int n = m % (2 * k);
		if (n == 0)
		{
			std::cout << s << std::endl;
			return;
		}
		if (n == k)
		{
			std::cout << k << std::endl;
			return;
		}
		if (n > k) std::cout << k - m % k << std::endl;
		else std::cout << k - n + s - k << std::endl;
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
