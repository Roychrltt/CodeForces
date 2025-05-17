#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, q;
	std::cin >> n >> q;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int Q = 0;
	std::string s = "";
	for (int i = n - 1; i >= 0; i--)
	{
		if (v[i] > Q && Q < q)
		{
			Q++;
			s += '1';
		}
		else if (v[i] <= Q)
			s += '1';
		else s += '0';
	}
	std::reverse(s.begin(), s.end());
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
