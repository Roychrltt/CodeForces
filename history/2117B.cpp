#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n % 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (i < n / 2) std::cout << (i + 1) * 2 << " ";
			else std::cout << n - (i - n / 2) * 2 << " ";
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i < n / 2) std::cout << (i + 1) * 2 << " ";
			else std::cout << n - (i - n / 2) * 2 - 1 << " ";
		}

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
