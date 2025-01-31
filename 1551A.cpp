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
		int a = n / 3, b = n / 3;
		if (n % 3 == 1) a++;
		if (n % 3 == 2) b++;
		std::cout << a << " " << b << std::endl;
	}
	return 0;
}
