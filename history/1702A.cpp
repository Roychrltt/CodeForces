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
		long long int n;
		std::cin >> n;
		long long int tmp = n;
		long long int count = 1;
		while (tmp / 10) {
			count *= 10;
			tmp /= 10;
		}
		std::cout << n - count << std::endl;
	}
	return 0;
}
