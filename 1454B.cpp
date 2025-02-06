#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		map[v[i]]++;
	}
	int index = -1;
	int bid = 1e6;
	for (int i = 0; i < n; i++) {
		if (map[v[i]] == 1 && v[i] < bid)
		{
			index = i + 1;
			bid = v[i];
		}
	}
	std::cout << index << std::endl;
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
