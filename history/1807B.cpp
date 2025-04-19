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
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			if (x & 1)
				sum1 += x;
			else
				sum2 += x;
		}
		std::cout << (sum2 > sum1 ? "YES" : "NO") << std::endl;
	}
	return 0;
}
