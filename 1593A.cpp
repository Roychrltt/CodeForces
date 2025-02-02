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
		int aa, bb, cc;
		if (a > b && a > c)
			aa = 0;
		else
			aa = std::max(b - a, std::max(c - a, 0)) + 1;
		if (b > a && b > c)
			bb = 0;
		else
			bb = std::max(c - b, std::max(a - b, 0)) + 1;
		if (c > b && c > a)
			cc = 0;
		else
			cc = std::max(b - c, std::max(a - c, 0)) + 1;
		std::cout << aa << " " << bb << " " << cc << std::endl;
	}
	return 0;
}
