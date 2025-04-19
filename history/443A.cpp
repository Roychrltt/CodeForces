#include <bits/stdc++.h>

int main()
{
	std::string s;
	std::getline(std::cin, s);
	std::vector<int> v(26);
	int len = s.length();
	int count = 0;
	for (int i = 1; i < len; i += 3)
	{
		if ((s[i] - 'a') < 26 && v[s[i] - 'a']++ == 0)
			count++;
	}
	std::cout << count << std::endl;
	return 0;
}
