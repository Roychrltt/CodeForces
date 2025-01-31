#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		if ((a < b && b < c) || (b > c && b < a))
			std::cout << b << std::endl;
		else if ((a > b && a < c) || (a < b && a > c))
			std::cout << a << std::endl;
		else
			std::cout << c << std::endl;
	}
	return 0;
}
