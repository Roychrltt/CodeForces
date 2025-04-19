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
		if (n & 3)
		{
			std::cout << "NO" << std::endl;
			continue;
		}
		else
			std::cout << "YES" << std::endl;
		n /= 2;
		std::vector<int> v(n);
		for (int i = 1; i <= n; i++) {
			std::cout << i * 2 << " ";
			if (i <= n / 2)
				v[i - 1] = i * 2 - 1;
			else
				v[i - 1] = i * 2 + 1;
		}
		for (int x : v)
			std::cout << x << " ";
		std::cout << std::endl;
	}
	return 0;
}
