#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::unordered_map<int, int> top;
	std::unordered_map<int, int> bot;
	for (int i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		if (y == 0) top[x]++;
		else bot[x]++;
	}
	long long int vCount = 0;
	long long int hCount = 0;
	if (!top.size() || !bot.size())
	{
		std::cout << 0 << std::endl;
		return;
	}
	for (auto [x, _] : top) {
		if (bot.count(x) > 0) vCount++;
	}
	vCount *= top.size() - 1 + bot.size() - 1;
	for (auto [x, _] : top) {
		if (bot.count(x - 1) > 0 && bot.count(x + 1) > 0) hCount++;
	}
	for (auto [x, _] : bot) {
		if (top.count(x - 1) > 0 && top.count(x + 1) > 0) hCount++;
	}
	std::cout << vCount + hCount << std::endl;
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
