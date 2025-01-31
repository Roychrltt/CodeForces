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
		std::cin >> v[0];
		int cur = v[0] == 1 ? 0 : 1;
		int count = cur;
		for (int i = 1; i < n; i++) {
			std::cin >> v[i];
			if (v[i] == 0)
				cur++;
			else
			{
				count = std::max(count, cur);
				cur = 0;
			}
		}
		count = std::max(count, cur);
		std::cout << count << std::endl;
	}
	return 0;
}
