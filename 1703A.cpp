#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		if (std::tolower(s[0]) == 'y' && std::tolower(s[1]) == 'e' && std::tolower(s[2]) == 's')
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}
