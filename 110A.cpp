#include <iostream>

int main()
{
	std::string s;
	std::cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '4' || s[i] == '7')
			count++;
	}
	if (count == 7 || count == 4)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}
