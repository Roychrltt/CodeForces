#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	if (k >= 3)
	{
		std::cout << 0 << std::endl;
		return;
	}
	std::sort(v.begin(), v.end());
	long long int d = v[0];
	for (int i = 0; i < n - 1; i++)
		d = std::min(d, v[i + 1] - v[i]);
	if (k == 1)
	{
		std::cout << d << std::endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			long long int vv = v[i] - v[j];
			long long int p = std::lower_bound(begin(v), end(v), vv) - begin(v);
			if (p < n) d = std::min(d, v[p] - vv);
			if (p > 0) d = std::min(d, vv - v[p - 1]);
		}
	}
	std::cout << d << std::endl;
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
