#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, x;
	std::cin >> n >> x;
	int a, b;
	std::cin >> a;
	if (n == 1)
	{
		std::cout << std::abs(x - a) << std::endl;
		return;
	}
	int xx;
	for (int i = 0; i < n - 2; i++)
		std::cin >> xx;
	std::cin >> b;
	if (x <= a || x >= b) std::cout << b - a << std::endl;
	else
	{
		int c = b - x, d = x - a;
		if (c > d) std::cout << d * 2 + c << std::endl;
		else std::cout << c * 2 + d << std::endl;
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
