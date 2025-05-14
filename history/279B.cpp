#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, t;
	std::cin >> n >> t;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int ans = 0, first = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
		while (sum > t)
		{
			sum -= v[first];
			first++;
		}
		ans = std::max(ans, i - first + 1);
	}
	std::cout << ans << std::endl;
	__Made in France__
}
