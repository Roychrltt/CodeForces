#include <bits/stdc++.h>

int main()
{
	int n, k;
	std::cin >> n >> k;
	int res = 240 - k;
	int count = 0;
	int d = 5;
	while (n-- && res > 0) {
		if (res >= d)
		{
			res -= d;
			count++;
		}
		d += 5;
	}
	std::cout << count << std::endl;
	return 0;
}
