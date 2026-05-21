#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, a, b;
	std::cin >> n >> a >> b;
	if (3 * a <= b) std::cout << a * n << std::endl;
	else
	{
		long long int k = n / 3;
		long long int ans = k * b;
		std::cout << ans + std::min((n % 3) * a, b) << std::endl;
	}
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
