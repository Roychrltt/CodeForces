#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int c;
		std::cin >> c;
		if (c <= 1399)
			std::cout << "Division 4" << std::endl;
		else if (c <= 1599)
			std::cout << "Division 3" << std::endl;
		else if (c <= 1899)
			std::cout << "Division 2" << std::endl;
		else
			std::cout << "Division 1" << std::endl;
	}
	return 0;
}
