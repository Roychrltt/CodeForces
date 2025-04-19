#include <bits/stdc++.h>

static void solve(void)
{
	std::string s, ss;
	std::cin >> s >> ss;
	int n = s.length(), m = ss.length();
	if (s[n - 1] == ss[m - 1])
	{
		if ((n > m && s[n - 1] == 'S') || (n < m && s[n - 1] == 'L'))
			std::cout << "<" << std::endl;
		else if (n == m)
			std::cout << "=" << std::endl;
		else
			std::cout << ">" << std::endl;
	}
	else
	{
		if (s[n - 1] == 'S' || ss[m - 1] == 'L')
			std::cout << "<" << std::endl;
		else if (ss[m - 1] == 'S' || s[n - 1] == 'L')
			std::cout << ">" << std::endl;
		else if (s[n - 1] == 'S' && ss[m - 1] == 'M')
			std::cout << "<" << std::endl;
		else
			std::cout << ">" << std::endl;
	}
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
