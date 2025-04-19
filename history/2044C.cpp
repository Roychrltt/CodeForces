#include <bits/stdc++.h>

static void solve(void)
{
	int m, a, b, c;
	std::cin >> m >> a >> b >> c;
	int x = std::min(a, m), y = std::min(b, m);
	int z = std::min(c, 2 * m - x - y);
	std::cout << x + y + z << std::endl;
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
