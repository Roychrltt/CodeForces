#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		int odd = 0;
		bool even = false;
		for (int i = 0; i < n; i++)
		{
			int x;
			std::cin >> x;
			if (x % 2) odd++;
			else even = true;
		}
		if (!even) --odd;
		std::cout << even + odd << std::endl;
	}
	return 0;
}
