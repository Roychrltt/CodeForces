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
		std::vector<int> v(3);
		for (int i = 0; i < 3; i++) {
			std::cin >> v[i];
		}
		std::sort(v.begin(), v.end());
		std::cout << v[2] - v[0] << std::endl;
	}
	return 0;
}
