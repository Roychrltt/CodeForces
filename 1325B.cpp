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
		std::unordered_map<int, int> map;
		int count = 0;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			if (map[x]++ == 0) count++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
