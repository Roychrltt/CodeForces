#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	if (n == 1)
	{
		std::cout << v[0] << std::endl;
		return;
	}
	int sum = v[0] + v[1] - 1;
	for (int i = 2; i < n; i++) {
		sum = sum + v[i] - 1;
	}
	std::cout << sum << std::endl;
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
