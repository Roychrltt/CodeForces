#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::map<int, int> map;
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		x %= k;
		if (!x) continue;
		map[k - x]++;
		mx = std::max(mx, map[k - x]);
	}
	long long int sum = 0;
	for (const auto& [a, b] : map)
		if (b == mx) sum = k * 1LL * (b - 1) + a + 1;
	std::cout << sum << std::endl;
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
