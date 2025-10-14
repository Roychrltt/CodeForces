#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, k;
	std::cin >> n >> k;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	long long int sum = 0;
	long long int c = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (v[i] - c) * (n - i);
		if (sum >= k)
		{
			std::cout << k + i << std::endl;
			return;
		}
		c = v[i];
	}
	std::cout << k + n << std::endl;
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
