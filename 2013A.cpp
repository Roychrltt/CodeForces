#include <bits/stdc++.h>

static void solve(void)
{
	int n, x, y;
	std::cin >> n >> x >> y;
	x = std::min(x, y);
	std::cout << (n + x - 1) / x << std::endl;
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
