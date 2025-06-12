#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int odd = 1, even = 2;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (std::abs(j - n / 2) <= n / 2 - std::abs(i - n / 2))
			{
				std::cout << odd << " ";
				odd += 2;
			}
			else
			{
				std::cout << even << " ";
				even += 2;
			}
		}
		std::cout << std::endl;
	}
	__Made in France__
}
