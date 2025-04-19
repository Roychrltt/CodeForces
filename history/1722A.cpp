#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	if (n != 5)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	std::sort(s.begin(), s.end());
	if (s == "Timru")
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
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
