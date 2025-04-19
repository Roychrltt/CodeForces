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
		for (int i = 0; i < 5; i++) {
			if (a <= b && a <= c) a++;
			else if (b <= a && b <= c) b++;
			else c++;
		}
		std::cout << a * b * c << std::endl;
	}
	return 0;
}
