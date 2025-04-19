#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<long long>> v(n, std::vector<long long>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> v[i][j];
		}
	}
	std::sort(v.begin(), v.end(), [&](auto va, auto vb)
			{ return std::accumulate(va.begin(), va.end(), 0LL) > std::accumulate(vb.begin(), vb.end(), 0LL);});
	long long int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans += v[i][j] * (n * m - i * m - j);
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
