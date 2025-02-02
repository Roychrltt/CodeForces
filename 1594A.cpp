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
		std::cout << n * -1 + 1 << " " << n << std::endl;
	}
	return 0;
}
