#include <bits/stdc++.h>

static void solve(void)
{
	long long n, m, x;
	std::cin >> n >> m >> x;
	long long a = (x - 1) % n;
	long long b = (x - 1) / n;
	std::cout << a * m + b + 1 << std::endl;
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
