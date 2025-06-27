#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	if (n == 2)
	{
		std::cout << v[0] + v[1] << std::endl;
		return;
	}
	long long int ans = 0;
	if (k == 1)
	{
		ans += *max_element(v.begin() + 1, v.end() - 1);
		ans = std::max(ans + v[0], ans + v[n - 1]);
		ans = std::max(ans, 0ll + v[0] + v[n - 1]);
		std::cout << ans << std::endl;
		return;
	}
	ans = 0;
	std::sort(v.begin(), v.end(), std::greater<>());
	for (int i = 0; i < k + 1; i++)
		ans += v[i];
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
