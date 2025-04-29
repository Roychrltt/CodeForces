#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	std::string ans;
	if (b == 0)
	{
		if (a > 0) std::cout << std::string(a + 1, '0') << std::endl;
		else std::cout << std::string(c + 1, '1') << std::endl;
		return;
	}
	for (int i = 0; i < b + 1; i++)
	{
		if (i & 1) ans += "1";
		else ans += "0";
	}
	ans.insert(1, std::string(c, '1'));
	ans.insert(0, std::string(a, '0'));
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
