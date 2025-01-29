#include <iostream>

int main()
{
	std::string s;
	std::cin >> s;
	int r = s.length() - 1;
	int l = 0;
	while (l < r)
	{
		while (l < r && s[l] != '3')
			l += 2;
		while (l < r && s[r] == '3')
			r -= 2;
		std::swap(s[l], s[r]);
		r -= 2;
	}
	r = s.length() - 1;
	l = 0;
	while (l < r)
	{
		while (l < r && s[r] != '1')
			r -= 2;
		while (l < r && s[l] == '1')
			l += 2;
		std::swap(s[l], s[r]);
		l += 2;
	}
	std::cout << s << std::endl;
	return 0;
}
