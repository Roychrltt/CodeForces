#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int& i : v) std::cin >> i;
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
		sum += std::abs(v[i] - v[i + 1]);
	int ans = sum;
	for (int i = 0; i < n - 2; i++)
	{
		int cur = sum - std::abs(v[i] - v[i + 1]) - std::abs(v[i + 1] - v[i + 2]) + std::abs(v[i] - v[i + 2]);
		ans = std::min(ans, cur);
	}
	ans = std::min(ans, sum - std::abs(v[0] - v[1]));
	ans = std::min(ans, sum - std::abs(v[n - 2] - v[n - 1]));
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
