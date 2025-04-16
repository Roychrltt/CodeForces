#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	if (((n & 1) && !(k & 1)) || (!(n & 1) && (k & 1) && 2 * k > n) || n < k)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	else
	{
		std::cout << "YES" << std::endl;
		if ((n & 1) || n < k * 2)
		{
			while (k > 1)
			{
				std::cout << "1 ";
				k--;
				n--;
			}
			std::cout << n << std::endl;
		}
		else
		{
			while (k > 1)
			{
				std::cout << "2 ";
				k--;
				n -= 2;
			}
			std::cout << n << std::endl;
		}
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
