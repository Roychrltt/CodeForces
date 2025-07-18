#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int a, b, x, y;
	std::cin >> a >> b >> x >> y;
	if (a > b)
	{
		if ((a ^ 1) == b) std::cout << y << std::endl;
		else std::cout << -1 << std::endl;
		return;
	}
	long long int d = b - a;
	if (x <= y) std::cout << d * x << std::endl;
	else
	{
		if (a & 1) std::cout << x * ((d + 1) / 2) + y * (d / 2) << std::endl;
		else std::cout << y * ((d + 1) / 2) + x * (d / 2) << std::endl;
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
