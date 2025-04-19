#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	if (t & 1)
		std::cout << 9 << " " << t - 9 << std::endl;
	else
		std::cout << 4 << " " << t - 4 << std::endl;
	return 0;
}
