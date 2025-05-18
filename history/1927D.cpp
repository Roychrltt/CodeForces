#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::vector<int> pos;
	pos.push_back(1);
	std::cin >> v[0];
	for (int i = 1; i < n; i++)
	{
		std::cin >> v[i];
		if (v[i] != v[i - 1]) pos.push_back(i + 1);
	}
	int t;
	std::cin >> t;
	while (t--)
	{
		int l, r;
		std::cin >> l >> r;
		auto itl = std::lower_bound(pos.begin(), pos.end(), l);
		auto itr = itl;
		if (itl != pos.end() && *itl == l) std::advance(itr, 1);
		if (itr == pos.end() || *itr > r) std::cout << "-1 -1" << std::endl;
		else std::cout << l << " " << *itr << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	__Made in France__
}
