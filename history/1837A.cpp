#include <bits/stdc++.h>

static void solve(void)
{
	int x, k;
	std::cin >> x >> k;
	if (x % k == 0)
		std::cout << 2 << std::endl << x - 1 << " " << 1 << std::endl;
	else
		std::cout << "1\n" << x << std::endl;
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
