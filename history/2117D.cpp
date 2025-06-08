#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	bool ok = true;
	long long int y = (n * v[0] - v[n - 1]) / (n * n - 1);
	long long int x = v[0] - n * y;
	if (x < 0 || y < 0)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i] - (i + 1) * x - (n - i) * y != 0)
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
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
