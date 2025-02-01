#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	int count = 0;
	int i = 1;
	while (i <= t / 2) {
		if (t / i * i == t) count++;
		i++;
	}
	std::cout << count << std::endl;
	return 0;
}
