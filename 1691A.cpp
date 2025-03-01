#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (v[i] & 1) count++;
	}
	if (count == n) std::cout << 0 << std::endl;
	else std::cout << std::min(count, n - count) << std::endl;
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
