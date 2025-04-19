#include <bits/stdc++.h>

static void solve(void)
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if ((a < b && a < c && b < d && c < d) || (b < d && b < a && a < c && d < c) || (a > b && a > c && b > d && c > d) || (a < b && c < d && a > c && b > d))
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
