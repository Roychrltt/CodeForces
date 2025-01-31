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
		std::string s, ss;
		std::cin >> s >> ss;
		std::swap(s[0], ss[0]);
		std::cout << s << " " << ss << std::endl;
	}
	return 0;
}
