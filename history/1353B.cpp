#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, k;
		std::cin >> n >> k;
		std::vector<int> v1(n);
		std::vector<int> v2(n);
		for (int i = 0; i < n; i++) {
			std::cin >> v1[i];
		}
		for (int i = 0; i < n; i++) {
			std::cin >> v2[i];
		}
		std::sort(v1.begin(), v1.end());
		std::sort(v2.begin(), v2.end());
		int l = 0, r = n - 1;
		while (k--)
		{
			if (v1[l] < v2[r])
			{
				std::swap(v1[l++], v2[r--]);
			}
			else
				break;
		}
		std::cout << std::accumulate(v1.begin(), v1.end(), 0) << std::endl;
	}
	return 0;
}
