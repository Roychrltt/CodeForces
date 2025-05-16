#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::vector<std::vector<int>> dp(n + 1, std::vector<int>(3, 101));
	dp[0][0] = dp[0][1] = dp[0][2] = 0;
	for (int i = 1; i <= n; i++)
	{
		int x = v[i - 1];
		int a = dp[i - 1][0];
		int b = dp[i - 1][1];
		int c = dp[i - 1][2];
		int m = std::min(std::min(a, b), c);
		dp[i][0] = m + 1;
		if (x == 1)
		{
			dp[i][1] = std::min(dp[i - 1][2], dp[i - 1][0]);
		}
		else if (x == 2)
		{
			dp[i][2] = std::min(dp[i - 1][1], dp[i - 1][0]);
		}
		else if (x == 3)
		{
			dp[i][1] = std::min(dp[i - 1][2], dp[i - 1][0]);
			dp[i][2] = std::min(dp[i - 1][1], dp[i - 1][0]);
		}
	}
	std::cout << std::min(std::min(dp[n][0], dp[n][1]), dp[n][2]) << std::endl;
	__Made in France__
}
