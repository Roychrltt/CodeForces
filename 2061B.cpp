#include <iostream>
#include <unordered_map>
#include <vector>

void solve(std::vector<int>& v)
{
	int a = 1e9, b = 1e9, cd = -1;
	std::unordered_map<int, int> map;
	for (int x : v)
		if (++map[x] > 1) cd = std::max(cd, x);
	if (cd < 0)
	{
		std::cout << -1 << std::endl;
		return ;
	}
	
	std::cout << -1 << std::endl;
	return ;
}

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			std::cin >> v[i];
		}
		solve(v);
	}
	return 0;
}
