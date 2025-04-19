#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		int k = 1;
		while (k < n)
		{
			k <<= 1;
			k++;
		}
		k >>= 1;
		std::cout << k << std::endl;
	}
	return 0;
}
