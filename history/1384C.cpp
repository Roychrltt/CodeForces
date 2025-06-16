#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s, t;
	std::cin >> s >> t;
	for (int i = 0; i < n; i++)
	{
		if (s[i] > t[i])
		{
			std::cout << -1 << std::endl;
			return;
		}
	}
	std::vector<std::set<int>> next(20, std::set<int>());
	for (int i = 0; i < n; i++)
	{
		int a = s[i] - 'a';
		int b = t[i] - 'a';
		if (a < b)
		{
			next[a].insert(b);
			next[b].insert(a);
		}
	}
	std::vector<int> vis(20);
	std::function<void(int)> dfs = [&](int i) -> void
	{
		vis[i] = true;
		for (int x : next[i])
			if (!vis[x]) dfs(x);
	};
	int ans = 20;
	for (int i = 0; i < 20; i++)
	{
		if (!vis[i])
		{
			ans--;
			if (next[i].size()) dfs(i);
		}
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
