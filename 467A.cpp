#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	int count = 0;
	while (t--)
	{
		int a, b;
		std::cin >> a >> b;
		if (b - a > 1) count++;
	}
	std::cout << count << std::endl;
	return 0;
}
