#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int cnt = 0;
	int check = 0;
	int len = s.size(), cur = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			cnt++;
			cur++;
		}
		else
		{
			len = std::min(len, cur);
			cur = 0;
		}
		if (i > 0 && s[i] == 'B' && s[i - 1] == 'B') check++;
	}
	len = std::min(len, cur);
	if (cnt == s.length())
		std::cout << 0 << std::endl;
	else if (s[0] == 'B' || s[s.size() - 1] == 'B' || check)
		std::cout << cnt << std::endl;
	else
		std::cout << cnt - len << std::endl;
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
