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
		int min = 1e8, sum = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			min = std::min(min, x);
			sum += x;
		}
		std::cout << sum - min * n << std::endl;
	}
	return 0;
}
