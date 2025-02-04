#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	char k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	int i = 0;
	while (s[i] >= k) {
		i++;
	}
	std::string ans = s.substr(0, i);
	ans += k;
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
