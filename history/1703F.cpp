#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	long long int ans = 0;
	std::vector<std::pair<int, int>> v;
	for (int i = 1; i <= n; i++)
	{
		int x;
		std::cin >> x;
		if (x < i) v.push_back({x, i});
	}
	std::sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		std::pair<int, int> p = {v[i].second + 1, -1};
		auto it = std::lower_bound(v.begin(), v.end(), p);
		ans += v.end() - it;
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
