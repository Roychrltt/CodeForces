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
	for (int i = 0; i < n - 1; i++)
	{
		std::string t;
		std::cin >> t;
		std::string a = s + t, b = t + s;
		if (a < b) s = a;
		else s = b;
	}
	std::cout << s << std::endl;
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
