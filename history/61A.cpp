#include <bits/stdc++.h>

int main()
{
	std::string s, ss;
	std::cin >> s >> ss;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] ^ ss[i])
			std::cout << 1;
		else
			std::cout << 0;
	}
	std::cout << std::endl;
	return 0;
}
