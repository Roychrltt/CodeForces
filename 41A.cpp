#include <iostream>
#include <string>

int main()
{
	std::string s, ss;
	std::cin >> s >> ss;
	int len = s.length(), lenn = ss.length();
	if (len != lenn)
	{
		std::cout << "NO" << std::endl;
		return 0;
	}
	for (int i = 0; i < len; i++) {
		if (s[i] != ss[len - i - 1])
		{
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;
	return 0;
}
