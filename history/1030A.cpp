#include <bits/stdc++.h>

int main()
{
	int t;
	bool hard = false;
	std::cin >> t;
	while (t--)
	{
		int x;
		std::cin >> x;
		if (x) hard = true;
	}
	if (hard)
		std::cout << "HARD" << std::endl;
	else
		std::cout << "EASY" << std::endl;
	return 0;
}
