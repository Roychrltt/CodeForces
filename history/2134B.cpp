#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long n, k;
	std::cin >> n >> k;
	std::vector<long long> v(n);
	for (long long i = 0; i < n; i++) std::cin >> v[i];
	if (k & 1)
	{
		for (long long i : v) std::cout << ((i & 1) ? i + k : i )<< " ";
		std::cout << std::endl;
	}
	else
	{
		long long x = k + 1;
		for (long long i : v)
		{
			if (i % x == 0) std::cout << i << " ";
			else
			{
				long long y = i % x;
				std::cout << i + k * y << " ";
			}
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	__Made in France__
}
