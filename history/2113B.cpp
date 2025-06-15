#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int w, h, a, b, x, y, xx, yy;
	std::cin >> w >> h >> a >> b >> x >> y >> xx >> yy;
	if (x > xx)
	{
		std::swap(x, xx);
		std::swap(y, yy);
	}
	if (x + a <= xx)
	{
		if ((xx - x - a) % a == 0 || (yy >= y + b && (yy - y - b) % b == 0) || (y >= yy + b && (y - yy - b) % b == 0)) std::cout << "Yes" << std::endl;
		else std::cout << "No" << std::endl;
	}
	else
	{
		int n = y + b, m = yy + b;
		if (n <= yy)
		{
			if ((yy - y - b) % b == 0) std::cout << "Yes" << std::endl;
			else std::cout << "No" << std::endl;
		}
		else
		{
			if ((y - yy - b) % b == 0) std::cout << "Yes" << std::endl;
			else std::cout << "No" << std::endl;
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
