#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::vector<int> v(n), vv(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			std::cin >> vv[i];
		}
		int max1 = 0, max2 = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > vv[i])
				std::swap(v[i], vv[i]);
			max1 = std::max(v[i], max1);
			max2 = std::max(vv[i], max2);
		}
		std::cout << max1 * max2 << std::endl;
	}
	return 0;
}
