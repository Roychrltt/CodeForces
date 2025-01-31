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
		int count = (s[0] - '1') * 10;
		for (int i = 1; i <= s.length(); i++) {
			count += i;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
