#include <iostream>
#include <vector>

static void solve()
{
	int n, s, m;
	std::cin >> n >> s >> m;
	std::vector<std::pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i].first >> v[i].second;
	}
	if (v[0].first >= s)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (v[i + 1].first - v[i].second >= s)
		{
			std::cout << "YES" << std::endl;
			return;
		}
	}
	if (m - v[n - 1].second >= s)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
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
