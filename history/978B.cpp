#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::string s;
	std::cin >> n >> s;
	int count = 0;
	int cur = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'x')
			cur++;
		else
		{
			count += std::max(cur - 2, 0);
			cur = 0;
		}
	}
	count += std::max(cur - 2, 0);
	std::cout << count << std::endl;
	return 0;
}
