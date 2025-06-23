#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> indeg(n + 1);
	std::vector<std::vector<int>> adj(n + 1, std::vector<int>());
	int x, y;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> x >> y;
		indeg[x]++;
		indeg[y]++;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	std::vector<int> inout(n + 1);
	if (n == 2)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	int start = -1;
	for (int i = 1; i <= n; i++)
	{
		if (indeg[i] == 1)
		{
			start = i;
			break;
		}
	}
	std::vector<int> vis(n + 1);
	inout[start] = 1;
	std::vector<std::pair<int, int>> ans;
	std::queue<int> q;
	q.push(start);
	bool ok = false;
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		vis[node] = 1;
		for (auto next : adj[node])
		{
			if (vis[next]) continue;
			if (indeg[next] == 2 && !ok)
			{
				inout[next] = inout[node];
				ok = true;
			}
			else
				inout[next] = inout[node] * -1;
			q.push(next);
			if (inout[node] == 1)
				ans.push_back({node, next});
			else
				ans.push_back({next, node});
		}
	}
	if (!ok)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	else
	{
		std::cout << "YES" << std::endl;
		for (auto& [a, b] : ans)
		{
			std::cout << a << " " << b << std::endl;
		}
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
