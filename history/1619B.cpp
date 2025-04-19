#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	int a = std::sqrt(n);
	int b = std::cbrt(n);
	int c = std::sqrt(std::cbrt(n));
	std::cout << a + b - c << std::endl;
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
