#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;
	int upper = 0, lower = 0;
	for (char c : s)
	{
		if (c >= 'a') lower++;
		else upper++;
	}
	if (upper > lower)
	{
		for (char& c : s)
			c = std::toupper(c);
	}
	else
	{
		for (char& c : s)
			c = std::tolower(c);
	}
	std::cout << s << std::endl;
	return 0;
}
