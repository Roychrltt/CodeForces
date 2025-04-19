#include <bits/stdc++.h>

int main()
{
	int k, r;
	std::cin >> k >> r;
	int count = 1;
	for (int i = 1; i <= 10; i++) {
		if (k * i % 10 == 0 || k * i % 10 == r)
			break;
		count++;
	}
	std::cout << count << std::endl;
	return 0;
}
