#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	if (k & 1)
	{
		for (int i = 0; i < n - 1; i++)
			std::cout << n << " ";
		std::cout << n - 1 << std::endl;
	}
	else
	{
		for (int i = 0; i < n - 2; i++)
			std::cout << n - 1 << " ";
		std::cout << n << " " << n - 1 << std::endl;
	}
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
