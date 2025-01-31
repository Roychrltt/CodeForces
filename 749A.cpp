#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	std::cout << t / 2 << std::endl;
	for (int i = 1; i < t / 2; i++) {
		std::cout << "2 ";
	}
	if (t & 1)
		std::cout << 3 << std::endl;
	else
		std::cout << 2 << std::endl;
	return 0;
}
