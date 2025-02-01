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
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			sum += std::abs(x);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
