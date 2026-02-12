#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> p(n), a(n);
	for (int i = 0; i < n; i++)
		std::cin >> p[i];
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::vector<int> vis(n + 1, -1);
	vis[a[0]] = 0;
	int idx = 1;
	while (idx < n)
	{
		while (idx < n && a[idx] == a[idx - 1]) idx++;
		if (idx >= n) break;
		if (vis[a[idx]] >= 0)
		{
			std::cout << "NO" << std::endl;
			return;
		}
		vis[a[idx]] = idx;
		idx++;
	}
	int prev = -1;
	for (int i : p)
	{
		if (vis[i] == -1) continue;
		else
		{
			if (vis[i] <= prev)
			{
				std::cout << "NO" << std::endl;
				return;
			}
			else prev = vis[i];
		}
	}
	std::cout << "YES" << std::endl;
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
