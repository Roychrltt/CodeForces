#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::pair<int, int>> v(n);
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i].first;
		sum += v[i].first;
		v[i].second = i + 1;
	}
	if (m > n / 2)
	{
		std::cout << -1 << std::endl;
		return;
	}
	std::sort(v.begin(), v.end());
	if (sum - v.back().first < v.back().first && m == 0)
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (m == 0)
	{
		std::cout << n - 1 << std::endl;
		int i = 0, rest = v.back().first;
		while (rest > v[i].first)
		{
			std::cout << v[i].second << " " << v.back().second << std::endl;
			rest -= v[i].first;
			i++;
		}
		while (i < n - 1)
		{
			std::cout << v[i].second << " " << v[i + 1].second << std::endl;
			i++;
		}
		return;
	}
	if (!(n & 1) || m < n / 2 || m == 1)
	{
		std::cout << n - m << std::endl;
		for (int i = 0; i < n - 2 * m; i++)
			std::cout << v[i].second << " " << v[i + 1].second << std::endl;
		for (int i = 0; i < m; i++)
			std::cout << v[n - 1 - i].second << " " << v[n - 2 * m + i].second << std::endl;
	}
	else
	{
		std::cout << n - m << std::endl;
		for (int i = 0; i < n / 2 - 1; i++)
			std::cout << v[n - 1 - i].second << " " << v[i].second << std::endl;
		std::cout << v[n / 2 - 1].second << " " << v[n / 2].second << std::endl;
		std::cout << v[n / 2 + 1].second << " " << v[n / 2].second << std::endl;
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
