#include <bits/stdc++.h>

static void solve(void)
{
	long long int a, b, c;
	std::cin >> a >> b >> c;
	int d = b % 3;
	if (d == 0)
		std::cout << a + b / 3 + (c + 2) / 3 << std::endl;
	else
	{
		if (c < 3 - d)
			std::cout << -1 << std::endl;
		else
			std::cout << a + (b + 2) / 3 + (c + d - 1) / 3 << std::endl;
	}
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
