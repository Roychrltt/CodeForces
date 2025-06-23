#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int cnt = 0;
	int n = s.size();
	for (int i = 0; i < n; i++)
		cnt += (s[i] == '0');
	int cnt1 = n - cnt;
	if (cnt == 0 || cnt == n)
	{
		std::cout << n << std::endl;
		return;
	}
	int sum = 0;
	for (int i = 0; i < n; i++, sum++)
	{
		if (s[i] == '0') cnt1--;
		else cnt--;
		if (cnt1 < 0 || cnt < 0) break;
	}
	std::cout << n - sum << std::endl;
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
