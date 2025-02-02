#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s, ss;
	std::cin >> s >> ss;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] != ss[i])
		{
			if (s[i] == '1') a++;
			else b++;
		}
	}
	std::cout << std::max(a, b) << std::endl;
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
