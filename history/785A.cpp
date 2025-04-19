#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	int count = 0;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		if (s[0] == 'T')
			count += 4;
		else if (s[0] == 'C')
			count += 6;
		else if (s[0] == 'O')
			count += 8;
		else if (s[0] == 'D')
			count += 12;
		else if (s[0] == 'I')
			count += 20;
	}
	std::cout << count << std::endl;
	return 0;
}
