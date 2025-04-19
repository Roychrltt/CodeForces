#include <bits/stdc++.h>

static void solve(void)
{
	int n, a, b;
	std::cin >> n >> a >> b;
	if (std::abs(a - b) & 1)
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
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
