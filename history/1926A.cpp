#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		int count = 0;
		for (int i = 0; i < 5; i++) {
			if (s[i] == 'A')
				count++;
		}
		if (count > 2)
			std::cout << "A" << std::endl;
		else
			std::cout << "B" << std::endl;
	}
	return 0;
}
