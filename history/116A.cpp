#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	int mc = 0;
	int cur = 0;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		cur = cur - a + b;
		mc = std::max(mc, cur);
	}
	std::cout << mc << std::endl;
	return 0;
}
