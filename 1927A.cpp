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
		std::string s;
		std::cin >> n >> s;
		int l = 0, r = n - 1;
		while (s[l] == 'W')
			l++;
		while (s[r] == 'W')
			r--;
		std::cout << (r >= l ? r - l + 1 : 0) << std::endl;
	}
	return 0;
}
