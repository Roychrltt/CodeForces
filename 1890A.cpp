#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::unordered_map<int, int> map;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (map[v[i]]++== 0) count++;
	}
	if (count > 2)
	{
		std::cout << "No" << std::endl;
		return;
	}
	std::sort(v.begin(), v.end());
	if (std::abs(map[v[0]] - map[v[n - 1]]) > 1)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
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
