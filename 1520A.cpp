#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::vector<int> v(26);
	v[s[0] - 'A'] = 1;
	for (int i = 1; i < n; i++) {
		if (v[s[i] - 'A'] && s[i - 1] != s[i])
		{
			std::cout << "NO" << std::endl;
			return;
		}
		v[s[i] - 'A'] = 1;
	}
	std::cout << "YES" << std::endl;
	return ;
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
