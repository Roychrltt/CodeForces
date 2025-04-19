#include <bits/stdc++.h>

static void solve(void)
{
	long long int a, b, c;
	std::cin >> a >> b >> c;
	long long int x, y;
	x = std::pow(10, a - 1);
	y = std::pow(10, b - 1);
	if (a < b)
		y += std::pow(10, c - 1);
	else
		x += std::pow(10, c - 1);
	std::cout << x << " " << y << std::endl;
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
