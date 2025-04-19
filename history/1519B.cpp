#include <bits/stdc++.h>

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	if (k == m - 1 + (n - 1) * m)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
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
