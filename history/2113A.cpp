#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static int solve(void)
{
	int n, a, b, x, y;
	std::cin >> n >> a >> b >> x >> y;
	if (n < a && n < b) return 0;
	if (n >= a && n < b)
		return (n - a) / x + 1;
	if (n >= b && n < a)
		return (n - b) / y + 1;
	if (n >= b && n >= a)
	{
		if (x < y)
		{
			int c = (n - a) / x + 1;
			int t = n - c * x;
			int d = t < b ? 0 : (t - b) / y + 1;
			return c + d;
		}
		else
		{
			int c = (n - b) / y + 1;
			int t = n - c * y;
			int d = t < a ? 0 : (t - a) / x + 1;
			return c + d;
		}
	}
	return 0;
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
		std::cout << solve() << std::endl;
	}
	__Made in France__
}
