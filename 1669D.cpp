#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	bool b = false, r = false;
	bool ans = true;
	int i = 0;
	while (i < n && s[i] == 'W') {
		i++;
	}
	while (i < n) {
		if (s[i] == 'W' && s[i - 1] == 'W')
		{
			i++;
			continue;
		}
		if (s[i] == 'W')
		{
			ans = ans & b & r;
			b = false;
			r = false;
		}
		if (s[i] == 'B') b = true;
		if (s[i] == 'R') r = true;
		i++;
	}
	if (s[n - 1] != 'W')
		ans = ans & b & r;
	std::cout << (ans ? "YES" : "NO") << std::endl;
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
