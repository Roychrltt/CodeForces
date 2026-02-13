#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	int cnt = 0;
	auto d = [&](int x) -> bool
	{
		int tmp = x;
		int s = 0;
		while (x)
		{
			s += x % 10;
			x /= 10;
		}
		return tmp - s == n;
	};
	for (int i = n; i <= n + 100; i++)
		cnt += d(i);
	std::cout << cnt << std::endl;
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
