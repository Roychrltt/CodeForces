#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	int x = (m + 1) / 2;
	int y = std::max((std::max((n - x * 15 + m * 4), 0) + 14) / 15, 0);
	std::cout << x + y << std::endl;
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
	return 0;
}
