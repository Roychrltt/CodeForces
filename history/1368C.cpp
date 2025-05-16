#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::cout << n * 3 + 4 << std::endl;
	std::cout << "0 0" << std::endl;
	std::cout << "0 1" << std::endl;
	std::cout << "1 0" << std::endl;
	for (int i = 1; i <= n; i++)
	{
		std::cout << i << " " << i << std::endl;
		std::cout << i << " " << i + 1 << std::endl;
		std::cout << i + 1 << " " << i << std::endl;
	}
	std::cout << n + 1 << " " << n + 1 << std::endl;
	__Made in France__
}
