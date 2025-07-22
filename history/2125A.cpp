#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	std::string ans = "";
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'T') cnt++;
		else ans += s[i];
	}
	std::string res(cnt, 'T');
	res += ans;
	std::cout << res << std::endl;
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
