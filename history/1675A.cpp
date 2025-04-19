#include <bits/stdc++.h>

static void solve(void)
{
	int a, b, c, x, y;
	std::cin >> a >> b >> c >> x >> y;
	int n = std::max(0, x - a), m = std::max(0, y - b);
	int z = std::max(0, n + m - c);
	if (z > 0) std::cout << "NO" << std::endl;
	else std::cout << "YES" << std::endl;
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
