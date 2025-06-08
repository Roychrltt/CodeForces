#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::unordered_map<int, std::vector<int>> map;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		v[i] = x;
		map[x].push_back(i);
	}
	int cur = 0, ans = 0, cnt = map.size();
	std::unordered_map<int, int> curmap;
	for (int i = n - 1; i >= 0; i--)
	{
		if (curmap[v[i]]++ == 0) cur++;
		map[v[i]].pop_back();
		if (map[v[i]].size() == 0) map.erase(v[i]);
		if (cur == cnt)
		{
			ans++;
			curmap.clear();
			cur = 0;
			cnt = map.size();
		}
	}
	if (cur) ans++;
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
