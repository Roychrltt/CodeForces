#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	std::array<std::string, 7> s = {"digit", "digit", "add -8", "add -4", "add -2", "add -1"};
	while (t--)
	{
		int n;
		std::cin >> n;
		int cnt = -1;
		int ans = -1;
		while (++cnt < 6)
		{
			std::cout << s[cnt] << std::endl;
			std::cin >> ans;
			if (ans == -1) return 0;
		}
		std::cout << "add " << n - 1 << std::endl;
		std::cin >> ans;
		std::cout << "!" << std::endl;
		std::cin >> ans;
	}
	__Made in France__
}
