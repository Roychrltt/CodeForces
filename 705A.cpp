#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::cout << "I hate ";
	for (int i = 1; i < t; i++) {
		if (i & 1)
			std::cout << "that I love ";
		else
			std::cout << "that I hate ";
	}
	std::cout << "it" << std::endl;
	return 0;
}
