#include <iostream>

int main()
{
	int m, n;
	std::cin >> m >> n;
	int result = m * n % 2 ? m * n - 1 : m * n;
	std::cout << result / 2  << std::endl;
	return 0;
}
