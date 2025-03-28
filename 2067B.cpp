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
	if (v[0] != v[1])
	{
		std::cout << "No" << std::endl;
		return;
	}
	int i = 2;
	int prev = v[1];
	while (i < n)
	{
		int j = i;
		while (j < n && v[j] == prev)
		{
			v[j]++;
			j++;
		}
		if ((i == n - 1 && v[i] != v[i - 1]) || (i < n - 1 && v[i] != v[i + 1]))
		{
			std::cout << "No" << std::endl;
			return;
		}
		prev = v[i];
		i += 2;
	}
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
