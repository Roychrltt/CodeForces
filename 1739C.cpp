#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

const long long int M = 998244353;

static void solve(void)
{
	long long int n;
	std::cin >> n;
	long long int dp[65][65][3];
	memset(dp, 0, sizeof(dp));
	dp[0][0][2] = 1;
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			for(int t = 0; t < 3; t++)
			{
				int turn = (i + j) % 4;
				if (turn == 0 || turn == 3)
				{
					dp[i + 1][j][t == 2 ? 0 : t] += dp[i][j][t];
					dp[i][j + 1][t] += dp[i][j][t];
				}
				else
				{
					dp[i + 1][j][t] += dp[i][j][t];
					dp[i][j + 1][t == 2 ? 1 : t] += dp[i][j][t];
				}
			}
		}	
	}
	for (int i = 0; i < 3; i++)
		std::cout << dp[n/2][n/2][i] % M << " ";
	for (int i = 0; i < 3; i++)
		std::cout << dp[n/2-1][n/2-1][i] % M << " ";
	for (int i = 0; i < 3; i++)
		std::cout << dp[n/2-2][n/2-2][i] % M << " ";
	for (int i = 0; i < 3; i++)
		std::cout << dp[n/2-3][n/2-3][i] % M << " ";
	for (int i = 0; i < 3; i++)
		std::cout << dp[n/2-4][n/2-4][i] % M << " ";
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
