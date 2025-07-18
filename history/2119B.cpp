#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	long long int x, y, xx, yy;
	std::cin >> x >> y >> xx >> yy;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	long long int s = std::accumulate(v.begin(), v.end(), 0ll);
	double dis = std::sqrt((xx - x) * (xx - x) + (yy - y) * (yy - y));
	if ((double)s < dis)
	{
		std::cout << "No" << std::endl;
		return;
	}
	long long int mx = *max_element(v.begin(), v.end());
	if ((double)s - mx + dis >= mx) std::cout << "Yes" << std::endl;
	else std::cout << "No" << std::endl;
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
