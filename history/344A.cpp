#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	int count = 0;
	std::string prev = "";
	while (t--)
	{
		std::string s;
		std::cin >> s;
		if (s != prev) count++;
		prev = s;
	}
	std::cout << count << std::endl;
	return 0;
}
