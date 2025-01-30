#include <bits/stdc++.h>

int main()
{
	int a, b, c, d, n;
	std::cin >> a >> b >> c >> d >> n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0)
			count++;
	}
	std::cout << count << std::endl;
	return 0;
}
