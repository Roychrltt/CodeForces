#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++)
		if (v[i][m - 1] == 'R')
			count++;
	for (int i = 0; i < m; i++) {
		if (v[n - 1][i] == 'D')
			count++;
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
