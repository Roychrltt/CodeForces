#include <bits/stdc++.h>

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	if ((!(n & 1) && (k % 4 == 1 || k % 4 == 0)) || ((n & 1) && (k % 4 == 3 || k % 4 == 0)))
		std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
