#include <bits/stdc++.h>

int main()
{
	int a, b;
	std::cin >> a >> b;
	int min = std::min(a, b);
	std::cout << min << " ";
	int max = std::max(a, b);
	std::cout << (max - min) / 2 << std::endl;
	return 0;
}
