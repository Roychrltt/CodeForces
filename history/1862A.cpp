#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>
#include <numeric>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int i = 0;
	bool flag = false;
	while (i < m)
	{
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'v')
				flag = true;
		}
		i++;
		if (flag) break;
	}
	flag = false;
	while (i < m)
	{
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'i')
				flag = true;
		}
		i++;
		if (flag) break;
	}
	flag = false;
	while (i < m)
	{
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'k')
				flag = true;
		}
		i++;
		if (flag) break;
	}
	flag = false;
	while (i < m)
	{
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'a')
				flag = true;
		}
		if (flag) break;
		i++;
	}
	std::cout << (i < m ? "YES" : "NO") << std::endl;
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
