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
	if (k == 1 || k == n)
	{
		std::cout << 1 << std::endl;
		return;
	}
	int l = k - 2, r = k;
	while (l >= 0 && s[l] == '.') l--;
	while (r < n && s[r] == '.') r++;
	if (l < 0 && r >= n)
	{
		std::cout << 1 << std::endl;
		return;
	}
	std::cout << std::max(std::min(k, n - r + 1), std::min(l + 2, n - k + 1)) << std::endl;
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
