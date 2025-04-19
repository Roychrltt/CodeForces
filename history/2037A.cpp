#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::unordered_map<int, int> map;
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		map[x]++;
	}
	int ans = 0;
	for (auto& [_, a] : map) {
		ans += a / 2;
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
	return 0;
}
