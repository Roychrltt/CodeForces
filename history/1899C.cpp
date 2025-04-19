#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int ans = v[0];
	int cur = v[0];
	for (int i = 1; i < n; i++) {
		if (std::abs(v[i]) % 2 != std::abs(v[i - 1]) % 2)
			cur = std::max(cur, 0) + v[i];
		else
			cur = v[i];
		ans = std::max(ans, cur);
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
