#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	if (n == 1)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	std::vector<int> seat(n);
	seat[v[0] - 1] = 1;
	for (int i = 1; i < n; i++) {
		int x = v[i] - 1;
		if ((x > 0 && seat[x - 1] == 0 && x < n - 1 && seat[x + 1] == 0) || (x == 0 && seat[x + 1] == 0) || (x == n - 1 && seat[x - 1] == 0))
		{
			std::cout << "NO" << std::endl;
			return;
		}
		seat[x] = 1;
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
