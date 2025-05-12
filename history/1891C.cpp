#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		sum += v[i];
	}
	std::sort(v.begin(), v.end(), std::greater<>());
	long long int s1 = sum, s2 = 0;
	for (int i = 0; i < n; i++)
	{
		s2 += v[i];
		sum -= v[i];
		long long int x = 0;
		if (s2 > sum) x = (s2 - sum + 1) / 2;
		x = i + 1 + x + sum;
		s1 = std::min(s1, x);
	}
	std::cout << s1 << std::endl;
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
