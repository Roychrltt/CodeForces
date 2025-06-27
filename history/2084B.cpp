#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	if (v[0] == v[1])
	{
		std::cout << "Yes" << std::endl;
		return;
	}
	if (n == 2 && v[0] != v[1])
	{
		std::cout << "No" << std::endl;
		return;
	}
	bool ok = false;
	long long int g = -1;
	for (int i = 1; i < n; i++)
	{
		if (v[i] % v[0] == 0)
		{
			ok = true;
			if (g < 0) g = v[i];
			else g = std::gcd(g, v[i]);
		}
	}
	if (!ok || g != v[0])
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
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
