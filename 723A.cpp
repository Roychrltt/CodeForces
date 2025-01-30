#include <bits/stdc++.h>

int main()
{
	std::vector<int> v(3);
	std::cin >> v[0] >> v[1] >> v[2];
	std::sort(v.begin(), v.end());
	std::cout << v[2] - v[0] << std::endl;
	return 0;
}
