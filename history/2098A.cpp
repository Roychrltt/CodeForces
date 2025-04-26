#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	std::array<int, 10> a = {};
	for (char c : s) a[c - '0']++;
	std::string ans = "";
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 10 - i; j < 10; j++)
		{
			if (a[j] > 0)
			{
				a[j]--;
				ans += '0' + j;
				break;
			}
		}
	}
	std::cout << ans << std::endl;
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
