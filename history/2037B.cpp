#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int k;
	std::cin >> k;
	int x;
	std::unordered_map<int, int> map;
	for (int i = 0; i < k; i++)
	{
		std::cin >> x;
		map[x]++;
	}
	int n = k - 2;
	for (auto& [a, b] : map)
	{
		if (a <= n && n % a == 0 && ((n / a == a && b > 1) || (n / a != a && map.count(n / a) > 0)))
		{
			std::cout << a << " " << n / a << std::endl;
			return;
		}
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
