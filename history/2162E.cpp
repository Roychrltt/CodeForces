#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	std::vector<int> cnt(n + 1);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		cnt[v[i]]++;
	}
	std::vector<int> zero;
	zero.reserve(n);
	for (int i = 1; i <= n; i++)
		if (cnt[i] == 0) zero.push_back(i);
	if (zero.empty())
	{
		for (int i = 0; i < k; i++)
			std::cout << v[i] << " ";
		std::cout << std::endl;
		return;
	}
	if (zero.size() >= 2)
	{
		for (int i = 0; i < k; i++)
		{
			if (i % 3 == 0) std::cout << zero[0] << " ";
			else if (i % 3 == 1) std::cout << zero[1] << " ";
			else std::cout << v[0] << " ";
		}
		std::cout << std::endl;
		return;
	}
	int b = v.back();
	int a;
	for (int x : v)
	{
		if (x != b)
		{
			a = x;
			break;
		}
	}
	for (int i = 0; i < k; i++)
	{
		if (i % 3 == 0) std::cout << zero[0] << " ";
		else if (i % 3 == 1) std::cout << a << " ";
		else std::cout << b << " ";
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
