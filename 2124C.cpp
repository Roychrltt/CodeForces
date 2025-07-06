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
	long long int ans = 1;
	for (long long int i = n - 1; i > 0; i--)
	{
		long long int g = std::gcd(v[i], v[i - 1]);
		if (v[i] < v[i - 1])
		{
			int a = v[i - 1] / g;
			long long int x = std::gcd(ans, a);
			ans = std::max(ans * a / x, ans);
		}
		else if (v[i] % v[i - 1])
		{
			long long int x = v[i - 1] / g;
			ans = std::max(ans, ans * (x / std::gcd(ans, x)));
		}
	}
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
