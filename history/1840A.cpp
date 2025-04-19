#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::string ans = "";
	char prev = s[0];
	ans += prev;
	for (int i = 1; i < n; i++) {
		if (s[i] != prev) continue;
		if (i != n - 1)
		{
			prev = s[i + 1];
			ans += prev;
			i++;
		}
	}
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
