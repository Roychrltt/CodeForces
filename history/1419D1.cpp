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
	{
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	std::cout << (n - 1) / 2 << std::endl;
	for (int i = 0; i < n / 2 * 2; i++)
	{
		if (i & 1) std::cout << v[i - 1] << " ";
		else std::cout << v[i + 1] << " ";
	}
	if (n & 1) std::cout << v[n - 1] << std::endl;

	__Made in France__
}
