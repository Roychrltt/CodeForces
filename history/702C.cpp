#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, m;
	std::cin >> n >> m;
	std::vector<int> cell(n);
	std::set<int> tower;
	for (int i = 0; i < n; i++)
		std::cin >> cell[i];
	for (int i = 0; i < m; i++)
	{
		int x;
		std::cin >> x;
		tower.insert(x);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int x = cell[i];
		if (i > 0 && x == cell[i - 1]) continue;
		auto l = tower.lower_bound(x);
		auto r = tower.upper_bound(x);
		int a, b;
		if (l == tower.begin()) a = *l - x;
		else if (l == tower.end() || *l > x)
			a = x - *std::prev(l);
		else a = 0;
		if (r == tower.end()) b = x - *std::prev(r);
		else b = *r - x;
		ans = std::max(ans, std::min(a, b));
	}
	std::cout << ans << std::endl;
	__Made in France__
}
