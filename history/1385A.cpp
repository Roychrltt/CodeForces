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
		int a, b, c;
		std::cin >> a >> b >> c;
		int min = std::min(a, std::min(b, c));
		int max = std::max(a, std::max(b, c));
		if (a == b && b == c)
			std::cout << "YES" << std::endl << a << " " << b << " " << c << std::endl;
		else if ((a == b && a > c) || (b == c && b > a) || (a == c & a > b))
			std::cout << "YES" << std::endl << min << " " << min << " " << max << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}
