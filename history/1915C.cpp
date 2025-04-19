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
		long long int sum = 0;
		for (int i = 0; i < n; i++) {
			long long int x;
			std::cin >> x;
			sum += x;
		}
		long long i = std::sqrt(sum);
		std::cout << (i * i == sum ? "YES" : "NO") << std::endl;
	}
	return 0;
}
