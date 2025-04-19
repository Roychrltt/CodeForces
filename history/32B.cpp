#include <bits/stdc++.h>

int main()
{
	std::string s;
	std::cin >> s;
	int len = s.length();
	int i = 0;
	while (i < len)
	{
		if (s[i] == '.')
		{
			std::cout << 0;
			i++;
		}
		else if (s[i + 1] == '.')
		{
			std::cout << 1;
			i += 2;
		}
		else
		{
			std::cout << 2;
			i += 2;
		}
	}
	return 0;
}
