#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '0') cnt++;
	}
	if (s.size() == 1)
	{
		std::cout << 0 << std::endl;
		return;
	}
	else
	{
		cnt--;
		int i = s.size() - 1;
		while (i >= 0 && s[i] == '0')
		{
			cnt++;
			i--;
		}

		std::cout << cnt << std::endl;
		return;
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
