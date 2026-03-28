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
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n), b(n);
	std::vector<int> ia(n + 2, -1), ib(n + 2, -1);
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		ia[a[i]] = i;
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> b[i];
		if (b[i] == -1) continue;
		if (ib[b[i]] != -1) flag = false;
		ib[b[i]] = i;
	}
	if (!flag)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (ib[i] == -1) continue;
		int x = std::max(0, ia[i] - k + 1), y = std::min(n - 1, ia[i] + k - 1);
		int xx = std::max(0, ib[i] - k + 1), yy = std::min(n - 1, ib[i] + k - 1);
		if (x != xx || y != yy)
		{
			std::cout << "NO" << std::endl;
			return;
		}
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
