#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		std::cout << n - v[i] + 1 << " ";
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
