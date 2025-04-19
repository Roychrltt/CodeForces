#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int num;
	std::cin >> num;
	v[0] = std::min(v[0], num - v[0]);
	v[n - 1] = std::max(v[n - 1], num - v[n - 1]);
	for (int i = 1; i < n - 1; i++) {
		if (v[i] > v[i + 1] || v[i] < v[i - 1])
			v[i] = num - v[i];
		if (v[i] > v[i + 1] || v[i] < v[i - 1])
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
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
