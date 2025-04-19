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
		for (int i = 0; i < 2 * n; i++) {
			int x;
			std::cin >> x;
			if (x & 1) count++;
		}
		std::cout << (count == n ? "YES" : "NO") << std::endl;
	}
	return 0;
}
