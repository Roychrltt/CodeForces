#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		int a = std::min(v[i], v[i + 1]);
		int b = std::max(v[i], v[i + 1]);
		double d = static_cast<double>(b) / a;
		if (d > 2)
		{
			int cur = 0;
			while (a * 2 < b) {
				cur++;
				a *= 2;
			}
			count += cur;
		}
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
