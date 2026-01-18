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
	int last = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '(')
		{
			last = i;
			break;
		}
	}
	for (int i = 0; i < last - 1; i++)
	{
		if (s[i] == ')' && s[i + 1] == '(')
		{
			std::cout << n - 2 << std::endl;
			return;
		}
	}
	std::cout << -1 << std::endl;
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
