#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	int maxn = 0, cnt = 0;
	std::set<int> set;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		maxn = std::max(maxn, x);
		if (set.find(x) == set.end()) cnt++;
		set.insert(x);
	}
	if (cnt > k)
	{
		std::cout << -1 << std::endl;
		return;
	}
	else
	{
		while (set.size() < k)
		{
			for (int i = 1; i <= k; i++)
			{
				if (set.find(i) == set.end())
				{
					set.insert(i);
					break;
				}
			}
		}
		std::cout << n * set.size() << std::endl;
		for (int i = 0; i < n; i++)
		{
			for (int j : set)
				std::cout << j << " ";
		}
		std::cout << std::endl;
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
