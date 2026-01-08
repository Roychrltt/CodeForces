#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> next(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		std::cin >> x >> y;
		next[x].push_back(y);
		next[y].push_back(x);
	}
	size_t x = next[1].size();
	for (int i = 2; i <= n; i++)
		x = std::max(x, next[i].size() - 1);
	int ans = x + 1;
	std::vector<int> vis(n + 1);
	std::queue<std::pair<int, int>> q;
	q.push({1, 1});
	int mx = 1;
	vis[0] = vis[1] = 1;
	int cur = 1, cnt = 1;
	while (!q.empty())
	{
		auto [node, l] = q.front();
		q.pop();
		if (l != cur)
		{
			cur = l;
			mx = std::max(mx, cnt);
			cnt = 1;
		}
		else cnt++;
		for (int x : next[node])
		{
			if (vis[x]) continue;
			q.push({x, l + 1});
			vis[x] = 1;
		}
	}
	mx = std::max(mx, cnt);
	std::cout << std::max(mx, ans) << std::endl;
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
