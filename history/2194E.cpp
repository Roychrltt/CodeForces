#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<long long int>> v(n, std::vector<long long int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> v[i][j];

	std::vector<std::vector<long long int>> dp(n, std::vector<long long int>(m));
	std::vector<std::vector<long long int>> dps(n, std::vector<long long int>(m));
	dp[0][0] = v[0][0];
	for (int i = 1; i < n; i++) dp[i][0] = dp[i - 1][0] + v[i][0];
	for (int j = 1; j < m; j++) dp[0][j] = dp[0][j - 1] + v[0][j];
	for (int i = 1; i < n; i++)
		for (int j = 1; j < m; j++)
			dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]) + v[i][j];
	dps[n - 1][m - 1] = v[n - 1][m - 1];
	for (int i = n - 2; i >= 0; i--) dps[i][m - 1] = dps[i + 1][m - 1] + v[i][m - 1];
	for (int j = m - 2; j >= 0; j--) dps[n - 1][j] = dps[n - 1][j + 1] + v[n - 1][j];
	for (int i = n - 2; i >= 0; i--)
		for (int j = m - 2; j >= 0; j--)
			dps[i][j] = std::max(dps[i + 1][j], dps[i][j + 1]) + v[i][j];

	std::vector<std::vector<long long int>> tr(n, std::vector<long long int>(m));
	std::vector<std::vector<long long int>> dl(n, std::vector<long long int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1; j >= 0; j--)
		{
			tr[i][j] = dp[i][j] + dps[i][j] - v[i][j];
			if (i) tr[i][j] = std::max(tr[i][j], tr[i - 1][j]);
			if (j < m - 1) tr[i][j] = std::max(tr[i][j], tr[i][j + 1]);
		}		
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < m; j++)
		{
			dl[i][j] = dp[i][j] + dps[i][j] - v[i][j];
			if (i < n - 1) dl[i][j] = std::max(dl[i][j], dl[i + 1][j]);
			if (j) dl[i][j] = std::max(dl[i][j], dl[i][j - 1]);
		}
	}
		
	long long int ans = 1e18;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			long long int cur = dp[i][j] + dps[i][j] - 3 * v[i][j];
			if (i && j < m - 1) cur = std::max(cur, tr[i - 1][j + 1]);
			if (i < n - 1 && j) cur = std::max(cur, dl[i + 1][j - 1]);
			ans = std::min(ans, cur);
		}
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
