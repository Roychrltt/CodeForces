#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.size();
	int cnt = 0;
	std::vector<int> v(n);
	for (int i = 1; i < n; i++)
	{
		bool flag = false;
		if (!v[i] && !v[i - 1] && s[i] == s[i - 1])
		{
			v[i] = 1;
			flag = true;
		}
		if (i > 1 && !v[i] && !v[i - 2] && s[i] == s[i - 2])
		{
			v[i] = 1;
			flag = true;
		}
		cnt += flag;
	}
	std::cout << cnt << std::endl;
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
