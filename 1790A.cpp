#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	std::string pie = "314159265358979323846264338327";
	while (t--)
	{
		std::string s;
		std::cin >> s;
		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == pie[i])
				count++;
			else
				break;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
