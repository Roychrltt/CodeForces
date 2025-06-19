#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::array<int, 26> a = {0};
	for (int i = 1; i < n - 1; i++)
	{
		if (++a[s[i] - 'a'] > 1)
		{
			std::cout << "Yes" << std::endl;
			return;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (a[i] > 0 && ('a' + i == s[0] || 'a' + i == s[n - 1]))
		{
			std::cout << "Yes" << std::endl;
			return;
		}
	}
	std::cout << "No" << std::endl;
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
