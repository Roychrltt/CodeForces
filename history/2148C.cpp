#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	int p = 0, last = 0;
	int ans = 0;
	int t, d;
	for (int i = 0; i < n; i++)
	{
		std::cin >> t >> d;
		if (d == p) ans += ((t - last) & 1) ? t - last - 1 : t - last;
		else ans += ((t - last) & 1) ? t - last : t - last - 1;
		last = t;
		p = d;
	}
	ans += m - t;
	std::cout << ans << std::endl;
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
