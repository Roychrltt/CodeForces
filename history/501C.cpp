#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int n;
	std::cin >> n;
	std::vector<std::vector<long long int>> v(n, std::vector<long long int>(2));
	std::queue<int> q;
	for (long long int i = 0; i < n; i++)
	{
		long long int x, y;
		std::cin >> x >> y;
		v[i][0] = x, v[i][1] = y;
		if (x == 1) q.push(i);
	}
	std::vector<std::vector<int>> ans(0, std::vector<int>());
	while (!q.empty())
	{
		int x = q.front(), y = v[x][1];
		q.pop();
		if (v[x][0] != 1) continue;
		ans.push_back({x, y});
		v[y][1] ^= x;
		v[y][0]--;
		if (v[y][0] == 1) q.push(y);
	}
	std::cout << ans.size() << std::endl;
	for (auto& aaa : ans) std::cout << aaa[0] << " " << aaa[1] << std::endl;
	__Made in France__
}
