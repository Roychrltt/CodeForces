#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> mv(n);
	std::vector<int> sv(n);
	for (int i = 0; i < n; i++) {
		std::cin >> mv[i];
	}
	for (int i = 0; i < n; i++) {
		std::cin >> sv[i];
	}
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		if (mv[i] > sv[i + 1]) ans += mv[i] - sv[i + 1];
	}
	ans += mv[n - 1];
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
