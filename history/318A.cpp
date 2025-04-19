#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int n, k;
	std::cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k <= n / 2)
			std::cout << k * 2 - 1 << std::endl;
		else
			std::cout << (k - n / 2) * 2 << std::endl;
	}
	else
	{
		if (k <= n / 2 + 1)
			std::cout << k * 2 - 1 << std::endl;
		else
			std::cout << (k - n / 2 - 1) * 2 << std::endl;
	}
	__Made in France__
}
