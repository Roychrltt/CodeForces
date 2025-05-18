#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;
	std::vector<int> v(n), vis(n + 1);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		vis[v[i]] = 1;
	}

	int x = 1;
	std::vector<int> dup;
	int reg = -1;
	for (int i = 0; i < n; i++)
	{
		if (v[i]) continue;
		while (x < n + 1 && vis[x])
			x++;
		v[i] = x++;
		if (x == i + 2) dup.push_back(x - 1);
		else if (reg == -1) reg = i;
	}

	if (dup.empty())
	{
		std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
	else if (dup.size() == 1)
	{
		std::swap(v[dup[0] - 1], v[reg]);
		std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
	else if (dup.size() % 2 == 0)
	{
		for (int i = 0; i < dup.size(); i += 2)
			std::swap(v[dup[i] - 1], v[dup[i + 1] - 1]);
		std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
	else
	{
		for (int i = 0; i < dup.size() - 3; i += 2)
			std::swap(v[dup[i] - 1], v[dup[i + 1] - 1]);

		int idx = dup.size() - 3;
		int i1 = dup[idx] - 1;
		int i2 = dup[idx + 1] - 1;
		int i3 = dup[idx + 2] - 1;
		std::swap(v[i1], v[i2]);
		std::swap(v[i2], v[i3]);
		std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
	__Made in France__
}
