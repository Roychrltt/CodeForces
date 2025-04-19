#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	for (int i = 0; i < n - 1; i++) {
		if (isalpha(s[i]) && isdigit(s[i + 1]))
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	std::string tmp = s;
	std::sort(s.begin(), s.end());
	if (tmp == s)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
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
