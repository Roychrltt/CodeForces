#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		std::vector<std::pair<int, int>> v(4);
		for (int i = 0; i < 4; i++) {
			std::cin >> v[i].first >> v[i].second;
		}
		std::sort(v.begin(), v.end());
		std::cout << std::abs(v[1].second - v[2].second) * std::abs(v[0].first - v[2].first) << std::endl;
	}
	return 0;
}
