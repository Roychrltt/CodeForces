#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, q;
	std::cin >> n >> q;
	std::string s;
	std::cin >> s;
	bool b = false;
	for (char c : s) if (c == 'B') b = true;
	for (int i = 0; i < q; i++)
	{
		int x;
		std::cin >> x;
		if (!b) std::cout << x << std::endl;
		else
		{
			int cnt = 0;
			while (x)
			{
				if (s[cnt % n] == 'A')
				{
					x--;
					cnt++;
				}
				else
				{
					x >>= 1;
					cnt++;
				}
			}
			std::cout << cnt << std::endl;
		}
	}
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
