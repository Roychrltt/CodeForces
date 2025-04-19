#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<std::vector<int>> v(t, std::vector<int>(2));
	for (int i = 0; i < t; i++) {
		std::cin >> v[i][0] >> v[i][1];
	}
	int count = 0;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++)
			if (v[i][0] == v[j][1])
				count++;
	}
	std::cout << count << std::endl;
	return 0;
}
