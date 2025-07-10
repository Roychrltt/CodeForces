#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> l(n), r(n);
	for (int i = 0; i < n; i++)
		std::cin >> l[i];
	for (int i = 0; i < n; i++)
		std::cin >> r[i];
	std::vector<int> rest;
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (l[i] < r[i])
		{
			ans += r[i];
			rest.push_back(l[i]);
		}
		else
		{
			ans += l[i];
			rest.push_back(r[i]);
		}
	}
	std::sort(rest.begin(), rest.end(), std::greater<>());
	for (int i = 0; i < k - 1; i++)
		ans += rest[i];
	std::cout << ans + 1 << std::endl;
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
