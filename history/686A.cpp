#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int n, x;
	std::cin >> n >> x;
	int count = 0;
	while (n--)
	{
		char c;
		int d;
		std::cin >> c >> d;
		if (c == '+')
			x += d;
		else if (d <= x)
			x -= d;
		else
			count++;
	}
	std::cout << x << " " << count << std::endl;
	return 0;
}
