#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v;
	int min = -1;
	int max = 1e9 + 7;
	for (int i = 0; i < n; i++) {
		int c, d;
		std::cin >> c >> d;
		if (c == 1)
			min = std::max(min, d);
		else if (c == 2)
			max = std::min(max, d);
		else
			v.push_back(d);
	}
	if (max < min)
	{
		std::cout << 0 << std::endl;
		return;
	}
	int count = max - min + 1;
	for (auto i : v) {
		if (i >= min && i <= max)
			count--;
	}
	std::cout << count << std::endl;
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
