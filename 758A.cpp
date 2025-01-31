#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> v(t);
	for (int i = 0; i < t; i++) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	int count = 0;
	int m = v[t - 1];
	for (int i = 0; i < t - 1; i++) {
		count += m - v[i];
	}
	std::cout << count << std::endl;
	return 0;
}
