#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::string r = s;
	std::reverse(r.begin(), r.end());
	if (s <= r && n % 2 == 0)
		std::cout << s << std::endl;
	else if (s < r && n % 2 == 1)
		std::cout << s << r << std::endl;
	else if (s > r && n % 2 == 1)
		std::cout << r << std::endl;
	else
		std::cout << r << s << std::endl;
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
