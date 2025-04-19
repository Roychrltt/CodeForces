#include <bits/stdc++.h>

static void solve(void)
{
	int b, c, h;
	std::cin >> b >> c >> h;
	std::cout << std::min(b - 1, c + h) * 2 + 1 << std::endl;
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
