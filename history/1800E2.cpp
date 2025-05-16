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
	else if (n >= k * 2 || s == t)
		std::cout << "YES" << std::endl;
	else if (n <= k)
		std::cout << "NO" << std::endl;
	else 
	{
		bool ok = true;
		for (int i = n - k; i < k; i++)
		{
			if (s[i] != t[i])
			{
				ok = false;
				break;
			}
		}
		if (ok) std::cout << "YES" << std::endl;
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
