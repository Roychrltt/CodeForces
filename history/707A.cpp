#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int m, n;
	std::cin >> m >> n;
	bool color = false;
	for (int i = 0; i < m * n; i++) {
		char c;
		std::cin >> c;
		if (c == 'C' || c == 'M' || c == 'Y')
			color = true;
	}
	std::cout << (color ? "#Color" : "#Black&White") << std::endl;
	return 0;
}
