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
	int n = s.size();
	bool space = false;
	for (int i = 0; i < n; i++) {
		if (i < n - 2 && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			if (space) std::cout << " ";
			i += 2;
			space = false;
			continue;
		}
		std::cout << s[i];
		space = true;
	}
	__Made in France__
}
