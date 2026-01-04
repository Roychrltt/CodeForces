#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

constexpr int MOD = 998244353;
static void solve(void)
{
	int n, m, d;
	std::cin >> n >> m >> d;
	std::vector<std::string> v(n);
	for (int i = n - 1; i >= 0; i--)
		std::cin >> v[i];
	std::vector<long long int> pre(m + 1);
	std::vector<std::vector<long long int>> dp(n, std::vector<long long int>(m));
	for (int i = 0; i < m; i++)
		pre[i + 1] = pre[i] + (v[0][i] == 'X');
	for (int i = 0; i < m; i++)
	{
		int l = std::max(0, i - d), r = std::min(m - 1, i + d);
		dp[0][i] = pre[r + 1] - pre[l];
		if (v[0][i] != 'X') dp[0][i] = 0;
	}
	for (int j = 1; j < n; j++)
	{
		for (int i = 0; i < m; i++)
			pre[i + 1] = pre[i] + dp[j - 1][i];
		for (int i = 0; i < m; i++)
		{
			if (v[j][i] != 'X') continue;
			int hold = std::sqrt(d * d - 1);
			int l = std::max(0, i - hold), r = std::min(m - 1, i + hold);
			dp[j][i] = pre[r + 1] - pre[l];
		}
		for (int i = 0; i < m; i++)
			pre[i + 1] = pre[i] + dp[j][i];
		for (int i = 0; i < m; i++)
		{
			int l = std::max(0, i - d), r = std::min(m - 1, i + d);
			dp[j][i] = (pre[r + 1] - pre[l]) % MOD;
			if (v[j][i] != 'X') dp[j][i] = 0;
		}
	}
	long long int ans = 0;
	for (int i = 0; i < m; i++)
		ans = (ans + dp[n - 1][i]) % MOD;
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
