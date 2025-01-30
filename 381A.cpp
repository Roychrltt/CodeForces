#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> v(t);
	for (int i = 0; i < t; i++) {
		std::cin >> v[i];
	}
	int l = 0, r = t - 1;
	int sum[2] = {0};
	int d = 0;
	while (l <= r)
	{
		if (v[l] < v[r])
		{
			sum[d]+= v[r];
			r--;
		}
		else
		{
			sum[d] += v[l];
			l++;
		}
		d ^= 1;
	}
	std::cout << sum[0] << " " << sum[1] << std::endl;
	return 0;
}
