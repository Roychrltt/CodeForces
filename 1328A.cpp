#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		if (a % b == 0) std::cout << 0 << std::endl;
		else std::cout << b - (a % b) << std::endl;
	}
	return 0;
}
