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
		std::vector<int> tmp = v;
		std::sort(v.begin(), v.end());
		int max = v[n - 2];
		for (int i = 0; i < n; i++) {
			if (tmp[i] == v[n - 1])
				std::cout << tmp[i] - max << " ";
			else
				std::cout << tmp[i] - v[n - 1] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
