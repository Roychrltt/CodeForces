/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int n, k, v;
	std::cin >> n >> k >> v;
	std::vector<std::vector<int>> next(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		std::cin >> x >> y;
		next[x].push_back(y);
		next[y].push_back(x);
	}
	auto dfs = [&](this auto&& dfs, int node, int p) -> int
	{
		int l1 = 1e9, l2 = 1e9;
		for (int nn : next[node])
		{
			if (nn != p)
			{
				int cur = dfs(nn, node);
				if (cur < l1) std::swap(cur, l1);
				if (l1 < l2) std::swap(l1, l2);
			}
		}
		if (l2 == 1e9) return 0;
		if (l1 == 1e9) return l2 + 1;
		if (l1 + l2 < k) return 0;
		return l2 + 1;
	};
	if (dfs(v, -1) == 0) std::cout << "YES" << std::endl;
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
