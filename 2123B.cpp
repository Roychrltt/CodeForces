#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, j, k;
	std::cin >> n >> j >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int mn = *min_element(v.begin(), v.end());
	int mx = *max_element(v.begin(), v.end());
	//if (k > 1 || mn < j || std::count(v.begin(), v.end(), j) > 1) std::cout << "YES" << std::endl;
	//else std::cout << "NO" << std::endl;
	if (k == 1 && v[j - 1] < mx) std::cout << "NO" << std::endl;
	else std::cout << "YES" << std::endl;
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
