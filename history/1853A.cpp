#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int min = 1e9;
	for (int i = 0; i < n - 1; i++) {
		min = std::min(min, v[i + 1] - v[i]);
	}
	if (min < 0) std::cout << 0 << std::endl;
	else std::cout << min / 2 + 1 << std::endl;
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
