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
		std::string s;
		std::cin >> s;
		bool m = true;
		if (s[0] == '2' || (s[0] == '1' && s[1] >= '2'))
			m = false;
		if (m)
		{
			if (s[0] == '0' && s[1] == '0')
				std::cout << 12 << s[2] << s[3] << s[4] << " AM" << std::endl;
			else
				std::cout << s << " AM" << std::endl;
		}
		else
		{
			int hour = (s[0] - '0') * 10 + s[1] - '0';
			if (hour == 12)
				std::cout << s << " PM" << std::endl;
			else
				std::cout << (hour - 12 < 10 ? "0" : "") << hour - 12 << s[2] << s[3] << s[4] << " PM" << std::endl;
		}
	}
	return 0;
}
