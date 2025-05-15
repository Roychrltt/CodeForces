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
	std::vector<long long int> r1(n), r2(n);
	for (int i = 0; i < n; i++)
		std::cin >> r1[i];
	for (int i = 0; i < n; i++)
		std::cin >> r2[i];
	std::vector<std::vector<long long int>> dp(n + 1, std::vector<long long int>(2));
	for (int i = 1; i <= n; i++)
	{
		dp[i][0] = std::max(r1[i - 1] + dp[i - 1][1], dp[i - 1][0]);
		dp[i][1] = std::max(r2[i - 1] + dp[i - 1][0], dp[i - 1][1]);
	}
	std::cout << std::max(dp[n][0], dp[n][1]) << std::endl;
	__Made in France__
}
