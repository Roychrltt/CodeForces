#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int maxxpy = -1e9, minxpy = 1e9, maxxmy = -1e9, minxmy = 1e9, maxx = -1e9, minx = 1e9, maxy = -1e9, miny = 1e9;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == '#')
			{
				maxxpy = std::max(maxxpy, i + j);
				minxpy = std::min(minxpy, i + j);
				maxxmy = std::max(maxxmy, i - j);
				minxmy = std::min(minxmy, i - j);
				maxx = std::max(maxx, i);
				minx = std::min(minx, i);
				maxy = std::max(maxy, j);
				miny = std::min(miny, j);
			}
		}
	}
	if (maxxpy - minxpy <= 1) std::cout << "YES" << std::endl;
	else if (maxxmy - minxmy <= 1) std::cout << "YES" << std::endl;
	else if (maxx - minx <= 1 && maxy - miny <= 1) std::cout << "YES" << std::endl;
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
