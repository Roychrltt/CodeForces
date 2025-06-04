#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> v(m);
	for (int i = 0; i < m; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	int c = 1;
	while (c * 2 - 1 <= n)
	{
		for (int i = 0; i < 6; i++)
		{
			if (i & 1)
				std::cout << v[c - 1] << " ";
			else
				std::cout << v[m - c] << " ";
		}
		std::cout << std::endl;
		if (c * 2 - 1 == n) break;
		for (int i = 0; i < 6; i++)
		{
			if (i & 1)
				std::cout << v[m - c] << " ";
			else
				std::cout << v[c - 1] << " ";
		}
		std::cout << std::endl;
		c++;
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
