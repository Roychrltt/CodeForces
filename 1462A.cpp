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
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		int l = 0, r = n - 1;
		int d = 0;
		while (l <= r) {
			if (d == 0)
				std::cout << v[l++] << " ";
			else
				std::cout << v[r--] << " ";
			d ^= 1;
		}
		std::cout << std::endl;
	}
	return 0;
}
