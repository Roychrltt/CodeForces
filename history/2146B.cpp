#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> cnt(m + 1);
	std::vector<std::vector<int>> v(n, std::vector<int>());
	for (int i = 0; i < n; i++)
	{
		int l;
		std::cin >> l;
		v[i].resize(l);
		for (int j = 0; j < l; j++)
		{
			std::cin >> v[i][j];
			cnt[v[i][j]]++;
		}
	}
	for (int i = 1; i <= m; i++)
	{
		if (!cnt[i])
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		bool ok = true;
		for (int x : v[i])
		{
			if (cnt[x] <= 1)
			{
				ok = false;
				break;
			}
		}
		if (ok) ans++;
	}
	if (ans >= 2) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
