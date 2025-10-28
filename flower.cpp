#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, f;
	std::cin >> n >> f;
	std::vector<std::vector<std::pair<int, int>>> edges(n + 1, std::vector<std::pair<int, int>>());
	for (int i = 0; i < n - 1; i++)
	{
		int u, v, w;
		std::cin >> u >> v >> w;
		edges[u].push_back({v, w});
		edges[v].push_back({u, w});
	}
	std::function<void(int, int)> dfs;
	dfs = [&](int i, int j)
	{
		
	};
	__Made in France__
}
