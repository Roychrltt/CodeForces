#include <bits/stdc++.h>

static void solve(void)
{
	int x, y, k;
	std::cin >> x >> y >> k;
	int a = (x + k - 1) / k;
	int b = (y + k - 1) / k;
	std::cout << std::max(a * 2 - 1, b * 2) << std::endl;
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
