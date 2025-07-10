#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int& i : v) std::cin >> i;
	int x = 10000000, y = 10000000;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > x && v[i] > y)
		{
			ans++;
			if (x < y) x = v[i];
			else y = v[i];
		}
		else if (v[i] <= x && v[i] <= y)
		{
			if (x < y) x = v[i];
			else y = v[i];
		}
		else if (v[i] > x) y = v[i];
		else x = v[i];
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
