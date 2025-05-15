#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static std::vector<int> solve(int n, int k)
{
	if (n == 0) return {};

	if (k < n)
	{
		std::vector<int> v(n, -1);
		if (k > 0) v[k - 1] = 200;
		v[k] = -400;
		return v;
	}
	else
	{
		std::vector<int> v = solve(n - 1, k - n);
		v.push_back(1000);
		return v;
	}
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
		int n, k;
		std::cin >> n >> k;
		std::vector<int> v = solve(n, k);
		std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
	__Made in France__
}
