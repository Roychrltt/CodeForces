#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s = "";
	char c;
	int d = 9;
	while (n > d) {
		c = '0' + d;
		s += c;
		n -= d;
		d--;
	}
	c = '0' + n;
	s += c;
	std::reverse(s.begin(), s.end());
	std::cout << s << std::endl;
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
