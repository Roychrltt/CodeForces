#include <bits/stdc++.h>

static void solve(void)
{
	int n, k, p;
	std::cin >> n >> k >> p;
	k = std::abs(k);
	if (n * p < k)
	{
		std::cout << -1 << std::endl;
		return;
	}
	std::cout << (k + p - 1) / p << std::endl;
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
