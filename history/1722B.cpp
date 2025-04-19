#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::string s, ss;
		std::cin >> s >> ss;
		bool check = true;
		for (int i = 0; i < n; i++) {
			if ((s[i] == 'R' && ss[i] != 'R') || (s[i] != 'R' && ss[i] == 'R'))
				check = false;
		}
		std::cout << (check ? "YES" : "NO") << std::endl;
	}
	return 0;
}
