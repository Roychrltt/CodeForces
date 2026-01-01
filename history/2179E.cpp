#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, x, y;
	std::cin >> n >> x >> y;
	std::string s;
	std::cin >> s;
	std::vector<int> v(n);
	for (auto& i : v) std::cin >> i;
	long long int sum = std::reduce(v.begin(), v.end(), 0ll);
	if (sum > x + y)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	bool b1 = false, b2 = false;
	for (const auto& c : s)
	{
		if (c == '0') b1 = true;
		else b2 = true;
		if (b1 & b2) break;
	}
	if (!b1 && x + n > y)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (!b2 && y + n > x)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	long long int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
			a += v[i] / 2 + 1;
		else
			b += v[i] / 2 + 1;
	}
	if (a <= x && b <= y) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
