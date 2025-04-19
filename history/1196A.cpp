#include <bits/stdc++.h>

static void solve(void)
{
	long long int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a + b + c) / 2 << std::endl;
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
