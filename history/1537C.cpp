#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	if (n == 2)
	{
		std::cout << v[0] << " " << v[1] << std::endl;
		return;
	}
	int l = 0, r = n - 1;
	int d = v[r] - v[l] + 1;
	for (int i = 1; i < n; i++) {
		int cur = v[i] - v[i - 1];
		if (cur < d)
		{
			d = cur;
			l = i - 1;
			r = i;
		}
	}
	std::cout << v[r] << " ";
	int i = r + 1;
	while (i < n)
	{
		std::cout << v[i] << " ";
		i++;
	}
	i = 0;
	while (i < l)
	{
		std::cout << v[i] << " ";
		i++;
	}
	std::cout << v[l] << std::endl;
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
