#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

const int MOD = 998'244'353;

long long int fastPower(long long int x, long long int p)
{
	long long int res = 1;
	while (p)
	{
		if (p & 1) res = (res * x) % MOD;
		p >>= 1;
		x = (x * x) % MOD;
	}
	return res;
}	

long long int fact(long long int x)
{
	long long int res = 1;
	for (int i = 2; i <= x; i++)
		res = (res * i) % MOD;
	return res;
}

static void solve(void)
{
	std::vector<int> a(26);
	for (int i = 0; i < 26; i++)
		std::cin >> a[i];
	long long int sum = std::accumulate(a.begin(), a.end(), 0LL);
	std::vector<long long int> dp(sum + 1);
	dp[0] = 1;
	for (int i = 0; i < 26; i++)
	{
		if (a[i] == 0) {
			continue;
		}

		for (int j = sum; j >= 0; j--)
		{
			if (j + a[i] <= sum)
			{
				dp[j + a[i]] = (dp[j + a[i]] + dp[j]) % MOD;
			}
		}
	}
	int ans = dp[sum / 2] * fact(sum / 2) % MOD * fact((sum + 1) / 2) % MOD;
	for (int i = 0; i < 26; i++)
	{
		ans = (ans * fastPower(fact(a[i]), MOD - 2)) % MOD;
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
