#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(3);
	std::cin >> v[0] >> v[1] >> v[2];
	if (!v[n - 1] || !v[v[n - 1] - 1])
		std::cout << "NO" << std::endl;
	else
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
