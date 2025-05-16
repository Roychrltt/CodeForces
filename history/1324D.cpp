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
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		v[i] -= x;
	}
	std::sort(v.begin(), v.end());
	long long int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] > 0)
		{
			sum += n - i - 1;
			continue;
		}
		auto it = std::upper_bound(v.begin(), v.end(), v[i] * -1);
		sum += v.end() - it;
	}
	std::cout << sum << std::endl;
	__Made in France__
}
