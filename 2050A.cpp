#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int count = 0;
	int len = 0;
	int i = 0;
	while (i < n && len + v[i].length() <= m) {
		count++;
		len += v[i].length();
		i++;
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
