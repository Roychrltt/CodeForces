#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::string s;
	std::cin >> n >> s;
	int cnt = 0;
	int i = 0;
	while (i < n && s[i] == '0')
		i++;
	if (i == n)
	{
		std::cout << 0 << std::endl;
		return;
	}
	cnt++;
	i++;
	while (i < n)
	{
		if (s[i] != s[i - 1]) cnt++;
		i++;
	}
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
