#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	int ans = std::abs(v[n - 1] - v[0]);
	int l = 1, r = n;
	for (int i = 0; i < n - 1; i++) {
		if (std::abs(v[i + 1] - v[i]) < ans)
		{
			ans = std::abs(v[i + 1] - v[i]);
			l = i + 1;
			r = i + 2;
		}
	}
	std::cout << l << " " << r << std::endl;
	return 0;
}
