#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (v[i] > v[i + 1])
		{
			std::cout << "NO" << std::endl;
			return;
		}
		int d = std::min(v[i + 1], v[i]);
		while (d)
		{
			v[i + 1] -= d;
			v[i] -= d;
			d = std::min(v[i], v[i + 1]);
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
