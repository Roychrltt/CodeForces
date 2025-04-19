#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> v(t);
	int min = 101, max = 0;
	int a, b;
	for (int i = 0; i < t; i++) {
		std::cin >> v[i];
		if (v[i] > max)
		{
			max = v[i];
			b = i;
		}
		if (v[i] <= min)
		{
			min = v[i];
			a = i;
		}
	}
	if (a < b) a++;
	std::cout << b + t - 1 - a << std::endl;
	return 0;
}
