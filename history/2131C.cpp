#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n), b(n);
	int x;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		x = (x % k > k / 2 ? k - x % k : x % k);
		a[i] = x;
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		x = (x % k > k / 2 ? k - x % k : x % k);
		b[i] = x;
	}
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	if (a == b) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
