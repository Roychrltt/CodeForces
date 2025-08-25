#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::vector<long long int> dp(n + 1);
	dp[1] = v[0];
	for (int i = 1; i < n; i++)
		dp[i + 1] = std::min(dp[i] + v[i] - 1, dp[i - 1] + v[i - 1] + std::max(0ll, v[i] - i));
	std::cout << dp[n] << std::endl;
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
