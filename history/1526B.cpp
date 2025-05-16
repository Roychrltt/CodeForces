#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	if (n % 11 == 0 || n % 111 == 0 || (n % 111) % 11 == 0)
		std::cout << "YES" << std::endl;
	else
	{
		int d = 11;
		while (--d)
		{
			if (n < d * 111) continue;
			if ((n - d * 111) % 11 == 0)
			{
				std::cout << "YES" << std::endl;
				return;
			}
		}
		std::cout << "NO" << std::endl;
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
