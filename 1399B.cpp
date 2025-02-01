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
		int n;
		std::cin >> n;
		std::vector<int> v(n);
		std::vector<int> vv(n);
		int min1 = 1e9 + 1, min2 = 1e9 + 1;
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
			min1 = std::min(min1, v[i]);
		}
		for (int i = 0; i < n; i++) {
			std::cin >> vv[i];
			min2 = std::min(min2, vv[i]);
		}
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += std::max(v[i] - min1, vv[i] - min2);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
