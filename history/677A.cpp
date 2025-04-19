#include <iostream>

int main()
{
	int n, h;
	std::cin >> n >> h;
	int count = 0;
	while (n--)
	{
		int fence;
		std::cin >> fence;
		if (fence <= h) count++;
		else count += 2;
	}
	std::cout << count << std::endl;
	return 0;
}
