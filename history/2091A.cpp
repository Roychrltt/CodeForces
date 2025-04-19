#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::unordered_map<int, int> map;
	for (int i = 0; i < n; i++) {
		map[v[i]]++;
		if (map[1] > 0 && map[0] > 2 && map[3] > 0 && map[2] > 1 && map[5] > 0)
		{
			std::cout << i + 1 << std::endl;
			return;
		}
	}
	std::cout << 0 << std::endl;
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
