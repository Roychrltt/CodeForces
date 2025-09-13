#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		cnt += (v[i] & 1);
	}
	if (!cnt)
	{
		std::cout << 0 << std::endl;
		return;
	}
	cnt = (cnt + 1) / 2;
	std::sort(v.begin(), v.end(), std::greater<>());
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] & 1)
		{
			if (cnt-- > 0) ans += v[i];
		}
		else ans += v[i];
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
