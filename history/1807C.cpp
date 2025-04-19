#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(26);
	std::string s;
	std::cin >> s;
	for (int i = 0; i < n; i++) {
		int x = s[i] - 'a';
		if (!v[x]) v[x] = (i & 1) ? 1 : -1;
		else if ((v[x] == 1 && !(i & 1)) || (v[x] == -1 && (i & 1)))
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
