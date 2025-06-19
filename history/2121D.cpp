#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	std::vector<std::pair<int, int>> ans;
	ans.reserve(1709);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		std::cin >> b[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				std::swap(a[j], a[j + 1]);
				ans.push_back({1, j + 1});
			}
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (b[j] > b[j + 1])
			{
				std::swap(b[j], b[j + 1]);
				ans.push_back({2, j + 1});
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > b[i])
		{
			ans.push_back({3, i + 1});
		}
	}
	std::cout << ans.size() << std::endl;
	for (auto& [c, d] : ans)
		std::cout << c << " " << d << std::endl;
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
