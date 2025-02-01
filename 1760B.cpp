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
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int count = 0;
		for (int i = 0; i < n; i++) {
			count = std::max(s[i] - 'a' + 1, count);
		}
		std::cout << count << std::endl;
	}
	return 0;
}
