#include <bits/stdc++.h>

static void solve(void)
{
	int n, m, k, h;
	std::cin >> n >> m >> k >> h;
	std::vector<int> v(n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		if (v[i] != h && std::abs(v[i] - h) % k == 0 && std::abs(v[i] - h) / k < m)
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
