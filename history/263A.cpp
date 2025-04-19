#include <iostream>

int main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int cur;
			std::cin >> cur;
			if (cur)
			{
				std::cout << std::abs(i - 2) + std::abs(j - 2) << std::endl;
			}
		}
	}
	return 0;
}
