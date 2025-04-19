#include <bits/stdc++.h>

int main()
{
	std::vector<long long> v(4);
	std::cin >> v[0] >> v[1] >> v[2] >> v[3];
	std::sort(v.begin(), v.end());
	std::cout << v[3] - v[1] << " " << v[3] - v[0] << " " << v[3] - v[2] << std::endl;
	
	return 0;
}
