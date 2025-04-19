#include <bits/stdc++.h>

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::string a, b;
	std::cin >> a >> b;
	int i = 0, j = 0;
	int count = 0;
	while (i < n && j < m) {
		char c = a[i];
		while (j < m && b[j] != c)
			j++;
		if (i < m && c == b[j])
			count++;
		i++;
		j++;
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
