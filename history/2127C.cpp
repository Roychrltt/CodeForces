#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n), b(n);
	for (int &i : a) std::cin >> i;
	for (int &i : b) std::cin >> i;
	std::vector<std::pair<int, int>> v(n);
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		v[i].first = std::min(a[i], b[i]);
		v[i].second = std::max(a[i], b[i]);
		ans += v[i].second - v[i].first;
	}
	std::sort(v.begin(), v.end());
	for (int i = 1; i < n; i++)
	{
		if (v[i].first <= v[i - 1].second)
		{
			std::cout << ans << std::endl;
			return;
		}
	}
	int mn = 2e9;
	for (int i = 1; i < n; i++)
		mn = std::min(mn, v[i].first - v[i - 1].second);
	std::cout << ans + 2 * mn << std::endl;
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
