#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	bool one = false, zero = false;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (v[i] == 1) one = true;
		else zero = true;
	}
	if (!zero)
	{
		std::cout << "Alice" << std::endl;
		return;
	}
	if (!one)
	{
		std::cout << "Bob" << std::endl;
		return;
	}
	if (v[0] == 1 || v.back() == 1) std::cout << "Alice" << std::endl;
	else std::cout << "Bob" << std::endl;
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
