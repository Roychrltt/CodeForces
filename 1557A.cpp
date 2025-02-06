#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::cout << std::setprecision(10);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	if (v[n - 1] == v[0])
	{
		std::cout << v[0] * 2 << std::endl;
		return;
	}
	double moyen = std::accumulate(v.begin(), v.end() - 1, 0LL) / (static_cast<double>(n) - 1);
	std::cout << moyen + v[n - 1] << std::endl;
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
