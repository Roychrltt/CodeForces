#include <bits/stdc++.h>

static int solve(int n)
{
	int min = 0, max = 1000;
	int len = 0;

	while (min < max)
	{
		int mid = (min + max) / 2;
		int midUp = mid + 1;
		int sum = mid * (mid - 1) / 2;
		int sumUp = midUp * (midUp - 1) / 2;
		if (sum <= n && sumUp > n)
		{
			len = mid;
			break;
		}
		else if (sumUp <= n) min = mid;
		else if (sum > n) max = mid;
	}
	return len;
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
		int n;
		std::cin >> n;
		if (n == 0)
		{
			std::cout << 0 << std::endl;
			continue;
		}
		std::vector<int> v;
		int sum = 0;
		while (n)
		{
			int len = solve(n);
			v.push_back(len);
			sum += len;
			n -= len * (len - 1) / 2;
		}
		std::cout << sum << std::endl;
		int start = 0;
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i]; j++) {
				std::cout << i << " " << j + start << std::endl;
			}
			start += v[i];
		}
	}
	return 0;
}
