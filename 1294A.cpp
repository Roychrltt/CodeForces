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
		std::vector<int> v(3);
		int n;
		std::cin >> v[0] >> v[1] >> v[2] >> n;
		std::sort(v.begin(), v.end());
		int d = v[2] - v[1] + v[2] - v[0];
		if (n < d || (n - d) % 3)
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}
	return 0;
}
