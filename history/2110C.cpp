#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::vector<std::vector<int>> pos(n, std::vector<int>(2));
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	for (int i = 0; i < n; i++)
		std::cin >> pos[i][0] >> pos[i][1];
	std::vector<std::vector<int>> dp(n, std::vector<int>(2));
	if (v[0] == 1)
	{
		dp[0][0] = 1; 
		dp[0][1] = 1; 
	}
	else if (v[0] == -1)
	{
		dp[0][0] = 0; 
		dp[0][1] = 1; 
	}
	dp[0][0] = std::max(dp[0][0], pos[0][0]);
	dp[0][1] = std::min(dp[0][1], pos[0][1]);
	if (dp[0][0] > pos[0][1] || dp[0][1] < pos[0][0])
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (n == 1)
	{
		if (v[0] != -1)
			std::cout << v[0] << std::endl;
		else
		{
			if (pos[0][1] == 1) std::cout << 1 << std::endl;
			else std::cout << 0 << std::endl;
		}
		return;
	}
	for (int i = 1; i < n; i++)
	{
		if (v[i] == 0)
		{
			dp[i][0] = dp[i - 1][0];
			dp[i][1] = dp[i - 1][1];
		}
		else if (v[i] == 1)
		{
			dp[i][0] = dp[i - 1][0] + 1;
			dp[i][1] = dp[i - 1][1] + 1;
		}
		else if (v[i] == -1)
		{
			dp[i][0] = dp[i - 1][0];
			dp[i][1] = dp[i - 1][1] + 1;
		}
		if (dp[i][0] > pos[i][1] || dp[i][1] < pos[i][0])
		{
			std::cout << -1 << std::endl;
			return;
		}
		dp[i][0] = std::max(dp[i][0], pos[i][0]);
		dp[i][1] = std::min(dp[i][1], pos[i][1]);
	}
	int p = dp[n - 1][0];
	for (int i = n - 1; i > 0; i--)
	{
		if (v[i] == 1) p--;
		else if (v[i] == -1 && dp[i - 1][1] < p)
		{
			v[i] = 1;
			p--;
		}
		else if (v[i] == -1) v[i] = 0;
	}
	if (p > 0 && v[0] == -1) v[0] = 1;
	else if (v[0] == -1) v[0] = 0;
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
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
