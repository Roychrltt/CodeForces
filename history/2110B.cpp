#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.size();
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(') cnt++;
		else cnt--;
		if (cnt < 0 || (cnt == 0 && i != n - 1 && i != 0))
		{
			std::cout << "YES" << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
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
