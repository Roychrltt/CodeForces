#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::string ans = "";
	int i = n - 1;
	while (i >= 0) {
		std::string sub = s[i] == '0' ? s.substr(i - 2, 2) : s.substr(i, 1);
		char c = std::stoi(sub) + 'a' - 1;
		ans += c;
		i -= sub.length() == 1 ? 1 : 3;
	}
	std::reverse(ans.begin(), ans.end());
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
