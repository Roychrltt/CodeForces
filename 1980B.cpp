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
		int n, f, k;
		std::cin >> n >> f >> k;
		std::vector<int> v(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}
		if (k == n)
		{
			std::cout << "YES" << std::endl;
			continue;
		}
		int w = v[f - 1];
		std::sort(v.begin(), v.end(), std::greater<int>());		
		if (v[k - 1] > w)
			std::cout << "NO" << std::endl;
		else if (v[k - 1] < w || (v[k - 1] == w && v[k] < w))
			std::cout << "YES" << std::endl;
		else
			std::cout << "MAYBE" << std::endl;
	}
	return 0;
}
