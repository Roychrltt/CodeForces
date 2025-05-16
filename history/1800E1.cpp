#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::string s, t;
	std::cin >> s >> t;
	std::unordered_map<char, int> maps, mapt;
	for (char c : s)
		maps[c]++;
	for (char c : t)
		mapt[c]++;
	if (maps != mapt)
		std::cout << "NO" << std::endl;
	else if (n >= 6 || s == t)
		std::cout << "YES" << std::endl;
	else if (n <= 3)
		std::cout << "NO" << std::endl;
	else if (n == 4)
	{
		if (s[1] == t[1] && s[2] == t[2] && (s[0] == t[3]))
			std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	else if (n == 5)
	{
		if (s[2] == t[2]) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	__Made in France__
}
