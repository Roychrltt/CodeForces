#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i].first;
		v[i].second = (i & 1);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i].second == v[i + 1].second)
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
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
