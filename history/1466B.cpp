#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::unordered_map<int, int> map;
	int x;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		if(map.find(x) == map.end())
		{
			cnt++;
			map[x]++;
		}
		else if (map.find(x + 1) == map.end())
		{
			cnt++;
			map[x + 1]++;
		}
		else map[x]++;
	}
	std::cout << cnt << std::endl;
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
