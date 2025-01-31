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
		bool check = false;
		for (int i = 0; i < n; i++) {
			int x;
			std::cin >> x;
			if (x == k)
				check = true;
		}
		std::cout << (check ? "YES" : "NO") << std::endl;
	}
	return 0;
}
