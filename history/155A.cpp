#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	int x;
	std::cin >> x;
	int max = x, min = x;
	t--;
	int count = 0;
	while (t--)
	{
		std::cin >> x;
		if (x < min)
		{
			count++;
			min = x;
		}
		else if (x > max)
		{
			count++;
			max = x;
		}
	}
	std::cout << count << std::endl;
	return 0;
}
