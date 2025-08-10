#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		std::cin >> b[i];
	std::vector<int> c = a;
	if (a[n - 1] != b[n - 1])
	{
		std::cout << "NO" << std::endl;
		return;
	}
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i] != b[i] && (a[i] ^ a[i + 1]) != b[i] && (a[i] ^ c[i + 1]) != b[i])
		{
			std::cout << "NO" << std::endl;
			return;
		}
		a[i] = b[i];
	}
	std::cout << "YES" << std::endl;
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
