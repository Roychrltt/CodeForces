#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> v(n, std::vector<int>(m));
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> v[i][j];
			if (v[i][j] == 1) cnt++;
		}
	}
	int cur = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < m; j++)
		{
			if (cur == cnt / 2) break;
			if (v[i][j] == 1) cur++;
			v[i][j] = -1;
		}
	}
	std::cout << 1ll * cur * (cnt - cur) << std::endl;
	int i = 0, j = 0;
	while (i < n || j < m)
	{
		if (i >= n || (j < m && v[i][j] == -1))
		{
			std::cout << 'R';
			j++;
		}
		else
		{
			std::cout << 'D';
			i++;
		}
	}
	std::cout << std::endl;
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
