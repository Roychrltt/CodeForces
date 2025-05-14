#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n & 1)
	{
		for (int i = 0; i < n * (n - 1) / 2; i++)
		{
			if (i & 1) std::cout << "-1 ";
			else std::cout << "1 ";
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (i % 2 && j == i + 1)
				{
					std::cout << "0 ";
					continue;
				}
				std::cout << ((j + i) % 2 ? "1 " : "-1 ");
			}
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
