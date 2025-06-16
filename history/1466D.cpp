#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	long long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		ans += v[i];
	}
	std::vector<int> indeg(n);
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		std::cin >> x >> y;
		indeg[--x]++;
		indeg[--y]++;
	}
	std::vector<int> w;
	w.reserve(n + 1);
	for (int i = 0; i < n; i++)
	{
		if (indeg[i] > 1)
		{
			while (indeg[i]-- > 1)
				w.push_back(v[i]);
		}
	}
	std::sort(w.begin(), w.end(), std::greater<>());
	std::cout << ans << " ";
	for (int i = 0; i < n - 2; i++)
	{
		ans += w[i];
		std::cout << ans << " ";
	}
	std::cout << std::endl;
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
