#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int a, b, k;
	std::cin >> a >> b >> k;
	if (k >= a && k >= b)
	{
		std::cout << 1 << std::endl;
		return;
	}
	long long int g = std::gcd(a, b);
	if (a / g <= k && b / g <= k) std::cout << 1 << std::endl;
	else std::cout << 2 << std::endl;
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
