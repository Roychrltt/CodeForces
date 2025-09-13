#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, x, y;
	std::cin >> n >> m >> x >> y;
	int tmp;
	for (int i = 0; i < n; i++)
		std::cin >> tmp;
	for (int i = 0; i < m; i++)
		std::cin >> tmp;
	std::cout << n + m << std::endl;
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
