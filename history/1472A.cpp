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
		int count = 1;
		while (a % 2 == 0 || b % 2 == 0) {
			if (a % 2 == 0)
				a /= 2;
			else
				b/= 2;
			count *= 2;
		}
		std::cout << (count >= c ? "YES" : "NO") << std::endl;
	}
	return 0;
}
