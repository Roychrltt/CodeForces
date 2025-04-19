#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (auto &i : v) std::cin >> i;
	std::vector<int> dp(n + 1);
	dp[0] = 0;
	dp[1] = v[0];
	if (n > 1) dp[2] = v[0];
	for (int i = 3; i < n + 1; i++)
	{
		dp[i] = std::min(dp[i - 2] + v[i - 2], dp[i - 3] + v[i - 3]);
		if (i > 3) dp[i] = std::min(dp[i], dp[i - 4] + v[i - 4] + v[i - 3]);
	}
	dp[n] = std::min(dp[n], dp[n - 1] + v[n - 1]);
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
