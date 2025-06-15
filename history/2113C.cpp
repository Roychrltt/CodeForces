#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m, k;
	std::cin >> n >> m >> k;
	std::vector<std::string> v(n);
	std::vector<std::vector<int>> pre(n, std::vector<int>(m + 1));
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		for (int j = 1; j <= m; j++)
		{
			pre[i][j] += pre[i][j - 1];
			if (v[i][j - 1] == 'g')
			{
				cnt++;
				pre[i][j]++;
			}
		}
	}
	int gold = n * m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] != '.') continue;
			int cur = 0;
			for (int l = std::max(0, i - k + 1); l < std::min(n, i + k); l++)
				cur += pre[l][std::min(m, j + k)] - pre[l][std::max(0, j - k + 1)];
			gold = std::min(gold, cur);
		}
	}
	if (gold == n * m) std::cout << 0 << std::endl;
	else std::cout << cnt - gold << std::endl;
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
