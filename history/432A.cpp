#include <bits/stdc++.h>

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	int count = 0;
	for (int i = 2; i < n; i += 3) {
		if (v[i] + k <= 5)
			count++;
	}
	std::cout << count << std::endl;
	return 0;
}
