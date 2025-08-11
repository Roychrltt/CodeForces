#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> indeg(n + 1);
	std::vector<std::vector<int>> next(n + 1, std::vector<int>());
	int x, y;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> x >> y;
		indeg[x]++;
		indeg[y]++;
		next[x].push_back(y);
		next[y].push_back(x);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		cnt += (indeg[i] == 1);
	int ans = cnt;
	for (int i = 1; i <= n; i++)
	{
		int cur = cnt;
		if (indeg[i] == 1) cur--;
		for (int node : next[i])
			if (indeg[node] == 1) cur--;
		ans = std::min(ans, cur);
	}
	std::cout << ans << std::endl;
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
