#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n), c(n);
	for (int& i : a) std::cin >> i;
	for (int& i : b) std::cin >> i;
	for (int& i : c) std::cin >> i;
	int cntt = 0;
	for (int i = 0; i < n; i++) // a always starts from 0
	{
		for (int j = 0; j < n; j++) // b starts from i
		{
			if (a[j] >= b[(i + j) % n])
				break;
			if (j == n - 1) cntt++;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) // c always from 0
	{
		for (int j = 0; j < n; j++) // b from i
		{
			if (c[j] <= b[(i + j) % n])
				break;
			if (j == n - 1) cnt++;
		}
	}
	std::cout << 1ll * cnt * cntt * n << std::endl;
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
