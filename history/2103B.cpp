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
	int cnt = 0;
	if (s[0] == '1') cnt++;
	for (int i = 1; i < n; i++)
	{
		if (s[i] != s[i - 1]) cnt++;
	}
	if (cnt < 2) std::cout << cnt + n << std::endl;	
	else if (cnt == 2) std::cout << n + 1 << std::endl;
	else std::cout << cnt - 2 + n << std::endl;
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
