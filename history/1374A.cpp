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
		int x, y, n;
		std::cin >> x >> y >> n;
		int mod = n % x;
		if (mod > y) n -= mod - y;
		else if (mod != y) n -= (mod + x - y);
		std::cout << n << std::endl;
	}
	return 0;
}
