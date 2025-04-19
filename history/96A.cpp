#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s;
	std::cin >> s;
	int len = 1;
	char prev = s[0];
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == prev) len++;
		else
		{
			len = 1;
			prev = s[i];
		}
		if (len >= 7)
		{
			std::cout << "YES" << std::endl;
			return 0;
		}
	}
	std::cout << "NO" << std::endl;
	__Made in France__
}
