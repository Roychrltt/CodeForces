#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

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
		std::vector<int> v(n);
		int min = 100, max = 0;
		int a, b;
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
			if (v[i] < min)
			{
				min = v[i];
				a = i;
			}
			if (v[i] > max)
			{
				max = v[i];
				b = i;
			}
		}
		if (a > b) std::swap(a, b);
		if (b <= n / 2)
			std::cout << b + 1 << std::endl;
		else if (a >= n / 2)
			std::cout << n - a << std::endl;
		else
		{
			std::cout << std::min(b + 1, std::min(n - a, a + 1 + n - b)) << std::endl;
		}
	}
	return 0;
}
