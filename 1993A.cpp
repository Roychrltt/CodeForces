#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::vector<int> v(4);
	for (int i = 0; i < 4 * n; i++) {
		if (s[i] != '?')
			v[s[i] - 'A']++;
	}
	int ans = std::min(n, v[0]) + std::min(n, v[1]) + std::min(n, v[2]) + std::min(n, v[3]);
	std::cout << ans << std::endl;
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
