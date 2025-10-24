#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	int cnt = 0;
	if (s[0] == '1') cnt++;
	for (int i = 1; i < n; i++)
	{
		if (s[i] == '0') continue;
		for (int j = std::min(k - 1, i); j > 0; j--)
			
		{
			if (s[i - j] == '1') break;
			if (j == 1) cnt++;
		}
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
