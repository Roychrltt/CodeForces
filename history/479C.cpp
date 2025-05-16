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
	std::vector<std::pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i].first >> v[i].second;
	std::sort(v.begin(), v.end());
	int day = v[0].second;
	for (int i = 1; i < n; i++)
	{
		if (v[i].second >= day) day = v[i].second;
		else day = v[i].first;
	}
	std::cout << day << std::endl;
	__Made in France__
}
