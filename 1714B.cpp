#include <bits/stdc++.h>

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
	int count = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (map[v[i]]++ == 0) count++;
		else break;
	}
	std::cout << n - count << std::endl;
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
