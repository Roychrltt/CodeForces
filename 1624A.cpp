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
		std::vector<int> v(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		std::sort(v.begin(), v.end());
		std::cout << v[n - 1] - v[0] << std::endl;
	}
	return 0;
}
