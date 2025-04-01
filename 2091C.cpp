#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n == 1)
	{
		std::cout << 1 << std::endl;
		return;
	}
	if (n % 2 == 0)
	{
		std::cout << -1 << std::endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (i & 1)
			std::cout << (n + 1) / 2 + i / 2 + 1 << " ";
		else
			std::cout << i / 2 + 1 << " ";
	}
	std::cout << std::endl;
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
