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
		std::vector<std::string> v(10);
		for (int i = 0; i < 10; i++) {
			std::cin >> v[i];
		}
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (v[i][j] == '.') continue;
				if (i == 0 || j == 0 || i == 9 || j == 9) sum += 1;
				else if (i == 1 || j == 1 || i == 8 || j == 8) sum += 2;
				else if (i == 2 || j == 2 || i == 7 || j == 7) sum += 3;
				else if (i == 3 || j == 3 || i == 6 || j == 6) sum += 4;
				else sum += 5;
			}
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
