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
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		if (v[i] == 2)
			count++;
	}
	if (count % 2)
	{
		std::cout << -1 << std::endl;
		return;
	}
	else if (count == 0)
	{
		std::cout << 1 << std::endl;
		return;
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == 2) k++;
		if (k == count / 2)
		{
			std::cout << i + 1 << std::endl;
			return;
		}
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
