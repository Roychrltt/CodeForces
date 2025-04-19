#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int a, b;
	std::cin >> a >> b;
	int count = 0;
	while (a > 0 && b > 0) {
		if (a > 2)
		{
			a -= 2;
			b++;
		}
		else if (b > 2)
		{
			b -= 2;
			a++;
		}
		else if (a == 2 || b == 2)
		{
			a -= 2;
			b -= 2;
		}
		else
			break;
		count++;
	}
	std::cout << count << std::endl;
	return 0;
}
