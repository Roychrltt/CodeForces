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
		int count = 0;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			if (x & 1) count++;
			sum += x;
		}
		if ((sum & 1) ||(!count && ((sum / 2) & 1)))
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}
	return 0;
}
