#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, h, l;
	std::cin >> n >> h >> l;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	if (h > l) std::swap(h, l);
	int cnt = 0;
	int idx = 0;
	while (idx < n && v[idx] <= h) idx++;
	int idx2 = idx;
	while (idx2 < n && v[idx2] <= l) idx2++;
	if (idx2 - idx <= idx) std::cout << idx2 - idx + (idx * 2 - idx2) / 2 << std::endl;
	else std::cout << idx << std::endl;
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
