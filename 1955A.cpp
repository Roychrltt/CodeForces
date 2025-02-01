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
		int n, a, b;
		std::cin >> n >> a >> b;
		if (b >= a * 2)
			std::cout << n * a << std::endl;
		else
			std::cout << n / 2 * b + n % 2 * a << std::endl;
	}
	return 0;
}
