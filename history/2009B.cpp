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
		std::vector<std::string> v(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < 4; j++) {
				if (v[i][j] == '#')
					std::cout << j + 1 << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
