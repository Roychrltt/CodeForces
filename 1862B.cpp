#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v;

	int x;
	std::cin >> x;
	int prev = x;
	v.push_back(x);
	for (int i = 0; i < n - 1; i++) {
		std::cin >> x;
		v.push_back(x);
		if (prev > x)
			v.push_back(x);
		prev = x;
	}
	std::cout << v.size() << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
