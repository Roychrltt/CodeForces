#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s, t;
	std::cin >> s >> t;
	int a, b;
	int n = s.size(),m = t.size();
	int i = 0, j = 0;
	while (i < n)
	{
		a = 0, b = 0;
		char c = s[i];
		while (a + i < n && s[i + a] == c)
			a++;
		while (b + j < m && t[j + b] == c)
			b++;
		if (b < a || b > a * 2)
		{
			std::cout << "NO" << std::endl;
			return;
		}
		i += a;
		j += b;
	}
	if (i == n && j == m) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
