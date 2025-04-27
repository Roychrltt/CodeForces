#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, a, b;
	std::cin >> n >> a >> b;
	if (n == 1 || b == 1)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	if (a == 1)
	{
		std::cout << ((n - 1) % b == 0 ? "YES" : "NO") << std::endl;
		return;
	}
	long long int t = 1;
	while (t <= n)
	{
		if (t % b == n % b)
		{
			std::cout << "YES" << std::endl;
			return;
		}
		t *= a;
	}
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
	__Made in France__
}
