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
	if (s.find('0') == std::string::npos)
	{
		std::cout << "1 " << n - 1 << " 2 " << n << std::endl;
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1') continue;
			if (i < n / 2)
			{
				std::cout << i + 2 << " " << n << " " << i + 1 << " " << n << std::endl;
				return;
			}
			else
			{
				std::cout << 1 << " " << i + 1 << " " << 1 << " " << i << std::endl;
				return;
			}
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
