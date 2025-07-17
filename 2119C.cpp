#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, l, r, k;
	std::cin >> n >> l >> r >> k;
	int a = __builtin_clzll(l), b = __builtin_clzll(r);
	if (a == b)
	{
		if (n % 2 == 0)
			std::cout << -1 << std::endl;
		else
			std::cout << l << std::endl;
	}
	else
	{
		long long int x = (1 << (63 - b));
		if (n <= 2)
			std::cout << -1 << std::endl;
		else if (n % 2 == 0 && k > n - 2)
			std::cout << x << std::endl;
		else if (n % 2 == 0)
			std::cout << l << std::endl;
		else if (b - a == 1)
			std::cout << -1 << std::endl;
		else if
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
