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
	std::vector<int> v(7);
	for (int i = 0; i < 7; i++) {
		std::cin >> v[i];
	}
	std::cout << v[0] << " " << v[1] << " " << v[6] - v[0] - v[1] << std::endl;
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
