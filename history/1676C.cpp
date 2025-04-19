#include <bits/stdc++.h>

static void solve(void)
{
	int n, len;
	std::cin >> n >> len;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int ans = std::numeric_limits<int>::max();
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int cur = 0;
			for (int k = 0; k < len; k++)
				cur += std::abs(v[i][k] - v[j][k]);
			ans = std::min(ans, cur);
		}
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
