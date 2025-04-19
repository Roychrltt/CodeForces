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
	std::vector<int> v(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		sum += v[i];
	}
	std::sort(v.begin(), v.end(), std::greater<>());
	int cur = 0;
	for (int i = 0; i < n; i++) {
		cur += v[i];
		if (cur * 2 > sum)
		{
			std::cout << i + 1 << std::endl;
			return 0;
		}
	}
	__Made in France__
}
