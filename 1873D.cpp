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
		int len, k;
		std::string s;
		std::cin >> len >> k >> s;
		int count = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == 'B')
			{
				count++;
				i+= k - 1;
			}
		}
		std::cout << count << std::endl;
	}
	return 0;
}
