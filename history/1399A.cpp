#include <bits/stdc++.h>

void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	for (int i = 1; i < n; i++) {
		if (v[i] - v[i - 1] > 1)
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
