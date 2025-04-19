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
		if (v[0] == 1) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
		return;
	}
	std::sort(v.begin(), v.end());
	if (v[n - 1] - v[n - 2] > 1)
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
