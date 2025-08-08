#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	std::vector<int> v(n);
	v[0] = (s[0] == '#');
	for (int i = 1; i < n; i++)
		v[i] = v[i - 1] + (s[i] == '#');
	int l = v[k - 1];
	int r = v[n - 1] - v[k - 1];
	int c1 = l, c2 = r;
	if (l < k - 1) c1 = std::min(l + 1, r);
	if (r < n - k) c2 = std::min(r + 1, l);
	std::cout << l << " " << r << " " << c1 << " " << c2 << std::endl;
	std::cout << std::max(c1, c2) + 1 << std::endl;
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
