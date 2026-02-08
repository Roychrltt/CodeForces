#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, x, y;
	std::cin >> n >> x >> y;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	long long int sum = 0;
	for (auto i : v) sum += i / x;
	long long int ans = 0;
	for (auto i : v)
	{
		long long int cur = sum - i / x;
		ans = std::max(ans, cur * y + i);
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
