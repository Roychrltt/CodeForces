#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		if (a + b >= 10 || b + c >= 10 || a + c >= 10)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}
