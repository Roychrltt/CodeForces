#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++) std::cin >> v[i];
	long long int sum = 0;
	for (int i = 1; i < n; i += 2)
	{
		if (v[i - 1] > v[i])
		{
			sum += v[i - 1] - v[i];
			v[i - 1] = v[i];
		}
		if (i < n - 1 && v[i + 1] > v[i])
		{
			sum += v[i + 1] - v[i];
			v[i + 1] = v[i];
		}
		if (i < n - 1 && v[i - 1] + v[i + 1] > v[i])
		{
			int d = v[i + 1] + v[i - 1] - v[i];
			sum += d;
			v[i + 1] -= d;
		}
	}
	std::cout << sum << std::endl;
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
