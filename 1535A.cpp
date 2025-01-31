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
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		if (a > b)
			std::swap(a, b);
		if (c > d)
			std::swap(c, d);
		if (c > b || a > d)
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}
	return 0;
}
