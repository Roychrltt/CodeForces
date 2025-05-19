#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, x, y;
	std::cin >> n >> m >> x >> y;
	if (n == 1 && m == 1)
	{
		std::cout << 0 << std::endl;
		return;
	}
	int a = std::max(n - x, x - 1);
	int b = std::max(m - y, y - 1);
	int n1 = n - a, m1 = m - b;
	int cnt = 1, cnt1 = 1;
	while (n > 1 || m1 > 1)
	{
		if (n > 1) n = (n + 1) / 2;
		else m1 = (m1 + 1) / 2;
		cnt++;
	}
	while (n1 > 1 || m > 1)
	{
		if (n1 > 1) n1 = (n1 + 1) / 2;
		else m = (m + 1) / 2;
		cnt1++;
	}
	std::cout << std::min(cnt, cnt1) << std::endl;
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
