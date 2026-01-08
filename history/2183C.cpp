#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	int a = k - 1, b = n - k;
	if (a > b) std::swap(a, b);
	if (2 * b - 1 + a <= m)
	{
		std::cout << n << std::endl;
		return;
	}
	int tmp = 0;
	int t = std::min(a, (m + 1) / 3);
	tmp = t + 1 + (m + 1 - t) / 2;
	std::cout << tmp << std::endl;
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
