#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int a, b;
	std::cin >> a >> b;
	int c = std::max(a, b);
	if (c == 6)
		std::cout << "1/6" << std::endl;
	else if (c == 5)
		std::cout << "1/3" << std::endl;
	else if (c == 4)
		std::cout << "1/2" << std::endl;
	else if (c == 3)
		std::cout << "2/3" << std::endl;
	else if (c == 2)
		std::cout << "5/6" << std::endl;
	else if (c == 1)
		std::cout << "1/1" << std::endl;
	return 0;
}
