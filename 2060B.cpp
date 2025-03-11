#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> vv(n, std::vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> vv[i][j];
		}
		std::sort(vv[i].begin(), vv[i].end());
		vv[i].push_back(i + 1);
	}
	if (n == 1)
	{
		std::cout << 1 << std::endl;
		return;
	}
	std::sort(vv.begin(), vv.end());
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vv[i][j] != i + j * n)
			{
				std::cout << -1 << std::endl;
				return;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		std::cout << vv[i][m] << " ";
	}
	std::cout << std::endl;
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
