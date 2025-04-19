#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	if (v[0] == v[n - 1])
		std::cout << -1 << std::endl;
	else
	{
		int count = 0;
		for (int i = n - 1; i >= 0 && v[i] == v[n - 1]; i--) {
			count++;
		}
		std::cout << n - count << " " << count << std::endl;
		for (int i = 0; i < n - 1 && v[i] != v[n - 1]; i++) {
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
		for (int i = n - 1; i >= 0 && v[i] == v[n - 1]; i--) {
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
	}
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
