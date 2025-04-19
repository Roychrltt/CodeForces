#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> v(t, 0);
	int p;
	std::cin >> p;
	for (int i = 0; i < p; i++) {
		int x;
		std::cin >> x;
		v[x - 1] = 1;
	}
	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		std::cin >> x;
		v[x - 1] = 1;
	}
	if (std::accumulate(v.begin(), v.end(), 0) == t)
		std::cout << "I become the guy." << std::endl;
	else
		std::cout << "Oh, my keyboard!" << std::endl;
	return 0;
}
