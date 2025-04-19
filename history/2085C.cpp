#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int a, b;
	std::cin >> a >> b;
	if (a == b)
	{
		std::cout << -1 << std::endl;
		return;
	}
	std::cout << (1ll << 31) - std::max(a, b) << std::endl;
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
