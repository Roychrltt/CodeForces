#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	if (360 % (180 - n) == 0)
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
