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
		v[0]++;
		int p = 1;
		for (int x : v)
			p *= x;
		std::cout << p << std::endl;
	}
	return 0;
}
