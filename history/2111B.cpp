#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	int f0 = 1, f1 = 2;
	for (int i = 2; i < n; i++)
	{
		int tmp = f0 + f1;
		f0 = f1;
		f1 = tmp;
	}
	std::string s;
	int a, b, c;
	while (m--)
	{
		std::cin >> a >> b >> c;
		if (a < f1 || b < f1 || c < f1 || (std::max(a, b) < f1 + f0 && c < f1 + f0))
			s += '0';
		else s += '1';
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
