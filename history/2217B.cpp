/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int n, num, k;
	std::cin >> n >> num;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::cin >> k;
	int l = k - 2, r = k, lc = 0, rc = 0;
	while (l >= 0)
	{
		if (l + 1 < n && v[l] != v[l + 1]) lc++;
		l--;
	}
	while (r < n)
	{
		if (r && v[r] != v[r - 1]) rc++;
		r++;
	}
	if (lc && v[0] != v[k - 1]) lc++;
	if (rc && v.back() != v[k - 1]) rc++;
	std::cout << std::max(lc, rc) << std::endl;
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
