#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> v(n);
	for (int i = 0; i < m + 1; i++) {
		v[i] = n - m + i;
	}
	for (int i = m + 1; i < n; i++) {
		v[i] = n - i;
	}
	for (auto i : v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
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
