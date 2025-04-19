#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> v(n, std::vector<int>(2));
	for (int i = 0; i < n; i++) {
		std::cin >> v[i][0];
	}
	for (int i = 0; i < n; i++) {
		std::cin >> v[i][1];
	}
	std::sort(v.begin(), v.end(), [](auto& a, auto& b)
		{ return (a[0] - a[1] <= b[0] - b[1]);});
	std::set<std::pair<int, int>> ans;
	for (int i = 0; i < n; i++) {
		if (i > 0 && v[i][0] + v[i][1] <= v[i - 1][0] + v[i - 1][1]) continue;
		int r = v[i][1];
		int a = v[i][0] - r, b = v[i][0] + r;
		for (int j = a; j <= b; j++) {
			int y = (int)std::sqrt(r * r - (j - v[i][0]) * (j - v[i][0]));
			for (int k = -y; k <= y; k++) {
				int d = j - v[i][0];
				if (d * d + k * k <= r * r)
					ans.insert(std::make_pair(j, k));
			}
		}
	}
	std::cout << ans.size() << std::endl;
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
