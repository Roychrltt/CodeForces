#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	std::vector<int> v(26);
	for (int i = 0; i < s.length(); i++) {
		v[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		char c = 'a' + i;
		if (v[i] == 1)
			std::cout << c;
		else if (v[i] == 2)
			std::cout << c << c;
	}
	std::cout << std::endl;
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
