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
		if (a * 2 <= b)
			std::cout << a << " " << a * 2 << std::endl;
		else
			std::cout << "-1 -1" << std::endl;
	}
	return 0;
}
