#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, d;
	std::cin >> n >> m >> d;
	if (d < m)
	{
		std::cout << n << std::endl;
		return;
	}
	d += m;
	int x = d / m;
	std::cout << (n + x - 1) / x << std::endl;
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
