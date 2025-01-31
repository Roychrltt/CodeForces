#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		if (a - b == c)
			std::cout << "-" << std::endl;
		else
			std::cout << "+" << std::endl;
	}
	return 0;
}
