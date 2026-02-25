#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n + 1);
	for (int i = 0; i < n; i++)
		std::cin >> v[i + 1];
	std::vector<int> tmp, pos;
	std::vector<int> vis(n + 1);
	for (int i = 1; i <= n; i++)
	{
		if (vis[i]) continue;
		int j = i;
		while (j <= n)
		{
			vis[j] = 1;
			tmp.push_back(v[j]);
			pos.push_back(j);
			std::sort(tmp.begin(), tmp.end());
			j <<= 1;
		}
		for (int idx = 0; idx < pos.size(); idx++) v[pos[idx]] = tmp[idx];
		pos.clear();
		tmp.clear();
	}
	for (int i = 1; i < n; i++)
	{
		if (v[i] > v[i + 1])
		{
			std::cout << "NO" << std::endl;
			return;
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
