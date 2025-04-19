#include <bits/stdc++.h>

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<std::pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i].first;
	}
	for (int i = 0; i < n; i++) {
		std::cin >> v[i].second;
	}
	std::sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (v[i].first > k) break;
		k += v[i].second;
	}
	std::cout << k << std::endl;
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
