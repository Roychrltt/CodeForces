#include <bits/stdc++.h>

int main()
{
	int n, m;
	std::cin >> n >> m;
	int odd = 0;
	int c = 0;
	while (c++ < n)
	{
		if (!(c & 1))
		{
			if (odd)
			{
				std::cout << "#";
				for (int i = 1; i < m; i++) {
					std::cout << ".";
				}
			}
			else
			{
				for (int i = 1; i < m; i++) {
					std::cout << ".";
				}
				std::cout << "#";
			}
			odd ^= 1;
		}
		else
		{
			for (int i = 0; i < m; i++) {
				std::cout << "#";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
