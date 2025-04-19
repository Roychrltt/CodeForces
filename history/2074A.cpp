#include <bits/stdc++.h>

static void solve(void)
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (a == b && b == c && c == d)
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
