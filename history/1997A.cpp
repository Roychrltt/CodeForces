#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.length();
	int i = 1;
	while (i < n) {
		if (s[i] == s[i - 1])
			break;
		i++;
	}
	std::string ans = s.substr(0, i);
	ans += s[i - 1] == 'a' ? 'b' : 'a';
	ans += s.substr(i);
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
