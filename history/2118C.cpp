#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, k;
	std::cin >> n >> k;
	std::vector<int> cnt(64);
	long long int ans = 0;
	for (int j = 0; j < n; j++)
	{
		int x;
		std::cin >> x;
		ans += __builtin_popcount(x);
		int i = 0;
		while (i < 64)
		{
			if (!((1ll << i) & x)) cnt[i]++;
			i++;
		}
	}
	for (int i = 0; i < 64; i++)
	{
		if (k >= (1ll << i) * cnt[i])
		{
			ans += cnt[i];
			k -= (1ll << i) * cnt[i];
		}
		else
		{
			ans += k / (1ll << i);
			break;
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
