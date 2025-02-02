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
		if (a > b) std::swap(a, b);
		double m = (a + b) / 2;
		int d = c < m ? c + b - a : c - b + a;
		if (c < 1) std::cout << -1 << std::endl;
		else std::cout << d << std::endl;
	}
	return 0;
}
