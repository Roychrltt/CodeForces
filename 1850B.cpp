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
		int index = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			int a, b;
			std::cin >> a >> b;
			if (a > 10) continue;
			if (b > sum)
			{
				sum = b;
				index = i + 1;
			}
		}
		std::cout << index << std::endl;
	}
	return 0;
}
