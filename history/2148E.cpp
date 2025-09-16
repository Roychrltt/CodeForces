#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	std::vector<int> cnt(n + 1);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		cnt[v[i]]++;
	}
	for (auto i : cnt)
	{
		if (i % k)
		{
			std::cout << 0 << std::endl;
			return;
		}
	}
	long long int ans = 0;
	std::vector<int> map(n + 1);
	int l = 0, r = -1, len;
	while (++r < n)
	{
		map[v[r]]++;
		while (map[v[r]] > cnt[v[r]] / k)
			map[v[l++]]--;
		len = r - l + 1;
		ans += len;
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
