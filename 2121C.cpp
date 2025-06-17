#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> v(n, std::vector<int>(m));
	std::vector<int> row(n), col(m);
	int x;
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> x;
			v[i][j] = x;
			mx = std::max(mx, x);
		}
	}
	std::vector<std::pair<int, int>> pos;
	pos.reserve(n * m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == mx)
			{
				pos.push_back({i, j});
				row[i]++;
				col[j]++;
			}
		}
	}
	int px = -1, py = -1;
	int mxx = -1;
	for (int i = 0; i < n; i++)
	{
		if (row[i] > mxx)
		{
			mxx = row[i];
			px = i;
		}
	}
	mxx = -1;
	for (int i = 0; i < m; i++)
	{
		if (col[i] > mxx)
		{
			mxx = col[i];
			py = i;
		}
	}
	for (auto& [a, b] : pos)
	{
		if (a != px && b != py)
		{
			std::cout << mx << std::endl;
			return;
		}
	}
	std::cout << mx - 1 << std::endl;
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
