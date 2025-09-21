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
	int len = 0;
	int i = 0;
	while (i < n)
	{
		while (i < n && s[i] == '1') i++;
		if ((i == n - 1 && s[i] == '0') || (i < n - 1 && s[i] == '0' && s[i + 1] != '0'))
		{
			std::cout << "NO" << std::endl;
			return;
		}
		while (i < n && s[i] == '0') i++;
		i++;
	}
	std::vector<int> ans(n);
	i = 0;
	while (i < n)
	{
		while (i < n && s[i] == '1')
		{
			ans[i] = i + 1;
			i++;
		}
		int j = 0;
		while (i + j < n && s[i + j] == '0') j++;
		int idx = i + j, tmp = idx;
		while (i < idx)
		{
			ans[i] = tmp;
			tmp--;
			i++;
		}
	}
	std::cout << "YES" << std::endl;
	std::copy(ans.begin(), ans.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
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
