#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	long long int ans = 0;
	int mx = *max_element(v.begin(), v.end());
	int cnt = 32 - __builtin_clz(mx);
	std::vector<int> zero(cnt);
	for (int x : v)
		for (int i = 0; i < cnt; i++)
			if ((1 << i) & x) zero[i]++;
	long long int sum = std::accumulate(v.begin(), v.end(), 0ll);
	for (int x : v)
	{
		long long int cur = 0;
		for (int i = 0; i < cnt; i++)
		{
			if ((1 << i) & x)
			{
				cur += 1ll * (n - zero[i]) * (1 << i);
				cur -= 1ll * zero[i] * (1 << i);
			}
		}
		ans = std::max(ans, sum + cur);
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
