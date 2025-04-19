#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::string> v(n);
	std::vector<int> letter(26);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		for (int j = 0; j < v[i].length(); j++) {
			letter[v[i][j] - 'a']++;
		}
	}
	for (auto i : letter) {
		if (i % n != 0)
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::cout << "YES" << std::endl;
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
