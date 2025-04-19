#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> v(n, std::vector<int>(n));
	for (int i = 0; i < n; i++) {
		v[0][i] = 1;
		v[i][0] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			v[i][j] = v[i - 1][j] + v[i][j - 1];
		}
	}
	std::cout << v[n - 1][n - 1] << std::endl;
	return 0;
}
