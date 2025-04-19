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
		char a, b, c;
		if (n > 52)
		{
			a = n - 53 + 'a';
			b = 'z';
			c = 'z';
		}
		else if (n > 27)
		{
			a = 'a';
			b = n - 28 + 'a';
			c = 'z';
		}
		else
		{
			a = 'a';
			b = 'a';
			c = 'a' + n - 3;
		}
		std::cout << a << b << c << std::endl;

	}
	return 0;
}
