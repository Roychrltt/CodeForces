#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, l, r;
	std::cin >> n >> l >> r;
	std::vector<int> v(n + 1);
	for (int i = 1; i <= n; i++)
		v[i] = i;
	v[r] = l - 1;
	std::vector<int> ans(n + 1);
	for (int i = 1; i <= n; i++)
		ans[i] = v[i] ^ v[i - 1];
	std::copy(ans.begin() + 1, ans.end(), std::ostream_iterator<int>(std::cout, " "));
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
