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
		int count = 0;
		while (a <= c && b <= c)
		{
			if (a < b)
				a += b;
			else
				b += a;
			count++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
