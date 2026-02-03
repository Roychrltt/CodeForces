#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, x;
	std::cin >> n >> x;
	std::vector<std::vector<long long int>> v(n, std::vector<long long int>(3));
	for (int i = 0; i < n; i++)
	{
		long long int a, b, c;
		std::cin >> a >> b >> c;
		x -= (b - 1) * a;
		v[i][0] = a, v[i][1] = b, v[i][2] = c;
	}
	if (x <= 0)
	{
		std::cout << 0 << std::endl;
		return;
	}
	long long int ans = x;
	bool flag = false;
	for (auto vv : v)
	{
		long long int a = vv[0], b = vv[1], c = vv[2];
		long long int cur = b * a - c;
		if (cur <= 0) continue;
		flag = true;
		ans = std::min(ans, (x + cur - 1) / cur);
	}
	if (!flag)
	{
		std::cout << -1 << std::endl;
		return;
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
