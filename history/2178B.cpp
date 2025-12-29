#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.size();
	int cnt = s[0] == 'u';
	s[0] = 's';
	for (int i = 1; i < n; i++)
	{
		if (s[i] == 'u' && s[i - 1] == 'u')
		{
			cnt++;
			s[i] = 's';
		}
	}
	if (s[n - 1] == 'u') cnt++;
	std::cout << cnt << std::endl;
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
