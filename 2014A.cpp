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
		int n, k;
		std::cin >> n >> k;
		int sum = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			if (x >= k)
				sum += x;
			else if (x == 0 && sum > 0)
			{
				count++;
				sum--;
			}
		}
		std::cout << count << std::endl;
	}
	return 0;
}
