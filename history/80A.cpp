#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int n, m;
	std::cin >> n >> m;
	int i = 0;
	while (v[i] != n)
	{
		i++;
	}
	if (v[i + 1] == m) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
	return 0;
}
