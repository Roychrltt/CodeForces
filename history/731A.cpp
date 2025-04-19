#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s;
	std::cin >> s;
	int count = 0;
	char prev = 'a';
	for (char c : s)
	{
		int a = std::abs(prev - c);
		int b = 26 - a;
		count += std::min(a, b);
		prev = c;
	}
	std::cout << count << std::endl;
	return 0;
}
