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
	std::sort(v.begin(), v.end());
	long long int ans = 0;
	int prev = -1;
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (v[i] == v[i - 1])
		{
			cnt++;
			continue;
		}
		else
		{
			if (cnt >= 3) ans += 1ll * cnt * (cnt - 1) * (cnt - 2) / 6;
			if (cnt >= 2) ans += 1ll * cnt * (cnt - 1) / 2 * (prev + 1);
			prev = i - 1;
			cnt = 1;
		}
	}
	if (cnt >= 3) ans += 1ll * cnt * (cnt - 1) * (cnt - 2) / 6;
	if (cnt >= 2) ans += 1ll * cnt * (cnt - 1) / 2 * (prev + 1);
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
