#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s, t;
	std::cin >> s >> t;
	int ans = 0;
	for (int i = 0; i < (int)s.size(); i++)
	{
		if (s[i] == t[i]) ans += 2;
		else if (t[i] - s[i] >= 2) break;
		else
		{
			int j = i + 1, k = i + 1;
			while (j < (int)s.size() && s[j] == '9')
				j++;
			while (k < (int)t.size() && t[k] == '0')
				k++;
			ans += std::min(j - i, k - i);
			break;
		}
	}
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
