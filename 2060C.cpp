#include <bits/stdc++.h>

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::unordered_map<int, int> map;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		if (map[k - x] > 0)
		{
			count++;
			map[k - x]--;
		}
		else map[x]++;
	}
	std::cout << count << std::endl;
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
	return 0;
}
