#include <bits/stdc++.h>

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.length();
	std::string yes = "Yes";
	for (int i = 0; i < n - 1; i++) {
		char a = s[i];
		char b = s[i + 1];
		if (yes.find(a) == std::string::npos || yes.find(b) == std::string::npos || (a == 'Y' && b != 'e') || (a == 'e' && b != 's') || (a == 's' && b != 'Y'))
		{
			std::cout << "NO" << std::endl;
			return;
		}
	}
	if (yes.find(s[0]) == std::string::npos) std::cout << "NO" << std::endl;
	else
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
