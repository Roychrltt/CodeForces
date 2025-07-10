#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (long long int i = 0; i < n; i++)
		std::cin >> v[i];
	std::vector<long long int> pre(n);
	pre[0] = v[0];
	long long int m = v[0];
	long long int ans = v[0] + v[1];
	for (long long int i = 1; i < n; i++)
	{
		if (i < n - 1) ans = std::min(ans, pre[i - 1] + std::min(v[i] + v[i + 1], m));
		m = std::min(m, v[i]);
		pre[i] = pre[i - 1] + m;
	}
	ans = std::min(ans, pre[n - 1]);
	std::cout << ans << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	__Made in France__
}
