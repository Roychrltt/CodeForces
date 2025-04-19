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
		int a, b;
		std::cin >> a >> b;
		if (a > b)
			std::swap(a, b);
		std::cout << a << " " << b << std::endl;
	}
	return 0;
}
