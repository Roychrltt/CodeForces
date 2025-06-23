#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	bool ok = false;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (i > 0 && std::abs(v[i] - v[i - 1]) <= 1) ok = true;
	}
	if (ok)
	{
		std::cout << 0 << std::endl;
		return;
	}
	if (v[1] > v[0])
	{
		for (int i = 2; i < n; i++)
		{
			if (v[i] < v[i - 1])
			{
				std::cout << 1 << std::endl;
				return;
			}
		}
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (v[i] > v[i - 1])
			{
				std::cout << 1 << std::endl;
				return;
			}
		}
	}
	std::cout << -1 << std::endl;
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
