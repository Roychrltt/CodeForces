#include <bits/stdc++.h>

static void solve(void)
{
	long long int a, b, k;
	std::cin >> a >> b >> k;
	std::cout << (k + 1) / 2 * a - k / 2 * b << std::endl;
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
