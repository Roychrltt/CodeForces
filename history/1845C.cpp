#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.length();
	int m;
	std::cin >> m;
	std::string l, r;
	std::cin >> l >> r;
	int mx = 0;
	bool ok = false;
	for (int i = 0; i < m; ++i)
	{
		int li = l[i] - '0';
		int ri = r[i] - '0';
		int nmx = mx;

		for (int j = li; j <= ri; ++j)
		{
			int cur = mx;
			while (cur < n && (s[cur] - '0') != j) cur++;
			nmx = std::max(nmx, cur);
			if (nmx >= n)
			{
				std::cout << "YES" << std::endl;
				return;
			}
		}
		mx = nmx + 1;
	}
	std::cout << (mx > n ? "YES" : "NO") << "\n";
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
