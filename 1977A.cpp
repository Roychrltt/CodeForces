#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	if (n < m || (n - m) % 2) std::cout << "NO" << std::endl;
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
