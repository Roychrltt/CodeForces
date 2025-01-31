#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int k;
		std::cin >> k;

		int count = 0, num = 0;
		while (count < k) {
			num++;
			if (num % 3 != 0 && num % 10 != 3)
				count++;
		}
		std::cout << num << std::endl;
	}
	return 0;
}
