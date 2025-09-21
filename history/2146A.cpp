#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		map[v[i]]++;
	}
	std::vector<int> cnt;
	for (auto[_, i] : map) cnt.push_back(i);
	int ans = 0;
	std::sort(cnt.begin(), cnt.end(), std::greater<>());
	for (int i = 0; i < cnt.size(); i++)
		ans = std::max(ans, cnt[i] * (i + 1));
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
