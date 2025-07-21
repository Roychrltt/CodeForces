#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n), c(n), d(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i] >> b[i] >> c[i] >> d[i];
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] > d[i])
			ans += a[i] + b[i] - d[i];
		else if (a[i] > c[i])
			ans += a[i] - c[i];
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
