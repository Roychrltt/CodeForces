#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::map<int, int> map;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		if (map.count(a) == 0)
			map[a] = b;
		else
			map[a] = std::max(map[a], b);
	}
	std::vector<std::pair<int, int>> v(map.begin(), map.end());
	int q = v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (q > v[i].second)
		{
			std::cout << "Happy Alex" << std::endl;
			return 0;
		}
		else
			q = v[i].second;
	}
	std::cout << "Poor Alex" << std::endl;

	return 0;
}
