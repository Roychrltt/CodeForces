#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int min = std::numeric_limits<int>::max();
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		min = std::min(v[i], min);
	}
	if (v[0] != min)
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
