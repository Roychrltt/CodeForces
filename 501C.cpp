#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> v(n, std::vector<int>(2));
	std::vector<std::vector<int>> next(n, std::vector<int>());
	std::vector<int> indeg(n);
	for (int i = 0; i < n; i++)
	{
		int x, y;
		std::cin >> x >> y;
		v[i][0] = x, v[i][1] = y;
		indeg[i] = x;
	}

	__Made in France__
}
