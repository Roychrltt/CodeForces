#include <iostream>

int main()
{
	int t, n;
	std::cin >> t >> n;

	while (n--)
	{
		if (t % 10) t--;
		else t /= 10;
	}
	std::cout << t << std::endl;
	return 0;
}
